#include<bits/stdc++.h>
using namespace std;
struct A{
    int u,v,w;
};
#define INF 2000000000
A a[3000];
long long d[1002],temp[1002];
int main()
{
    int n,m,i,j,k,t,s;
    scanf("%d %d %d %d",&n,&m,&k,&t);
    for(i=0;i<m;i++){
        scanf("%d %d %d",&a[i].u,&a[i].v,&a[i].w);
    }
    for(i=0;i<k;i++){
        scanf("%d %d %d",&a[i+m].u,&a[i+m].v,&a[i+m].w);
        a[i+m].w *= (-1);
    }
    while(t--){
        scanf("%d",&s);
        for(i=1;i<=n;i++){
            d[i] = INF;
        }
        d[s] = 0;
        for(i=0;i<n-1;i++){
            for(j=0;j<m+k;j++){
                if(d[a[j].u]!=INF){
                    d[a[j].v] = min(d[a[j].v],d[a[j].u]+a[j].w);
                }
            }
        }
        for(i=1;i<=n;i++){
            temp[i] = d[i];
        }
        for(j=0;j<m+k;j++){
            if(d[a[j].u]!=INF){
                d[a[j].v] = min(d[a[j].v],d[a[j].u]+a[j].w);
            }
        }
        for(j=1;j<=n;j++){
            if(d[j]==temp[j]&&d[j]!=INF){
                printf("%lld ",d[j]);
            }else{
                printf("-1 ");
            }
        }
    }
    return 0;
}
