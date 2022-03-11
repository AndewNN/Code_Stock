#include<bits/stdc++.h>
using namespace std;
int p[100100];
int fin(int i){
    if(p[i]==i) return i;
    return p[i] = fin(p[i]);
}
int main()
{
    int n,m,q,i,a,b;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
        p[i]=i;
    }
    for(i=1;i<=m;i++){
        scanf("%d %d",&a,&b);
        p[fin(a)] = fin(b);
    }
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&a,&b);
        if(fin(a)==fin(b)){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}
