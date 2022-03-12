#include<bits/stdc++.h>
using namespace std;
int p[100100],o[100100];
int fin(int i){
    if(p[i]==i) return i;
    else        return p[i] = fin(p[i]);
}
int main()
{
    int n,m,i,a,b,c,d;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
        scanf("%d",&o[i]);
        p[i] = i;
    }
    while(m--){
        scanf("%d %d",&c,&d);
        a = fin(c);
        b = fin(d);
        if(a==b){
            printf("-1\n");
        }else{
            if(o[a]>o[b]){
                p[b] = a;
                o[a] += o[b]/2;
                printf("%d\n",a);
            }else if(o[a]<o[b]){
                p[a] = b;
                o[b] += o[a]/2;
                printf("%d\n",b);
            }else if(a < b){
                p[b] = a;
                o[a] += o[b]/2;
                printf("%d\n",a);
            }else{
                p[a] = b;
                o[b] += o[a]/2;
                printf("%d\n",b);
            }
        }
    }
    return 0;
}
