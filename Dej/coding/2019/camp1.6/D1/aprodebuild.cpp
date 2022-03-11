#include<bits/stdc++.h>
using namespace std;
int ch[250100][2],y[250100][2],p[300100];
int pl(int a){
    if(p[a]==a){
        return a;
    }
    return p[a] = pl(p[a]);
}
int main()
{
    int t,v,e,m,i,z,a,b,l,r,mid,mk,rk;
    scanf("%d",&t);
    for(z=1;z<=t;z++){
        rk = 0;
        scanf("%d %d %d",&v,&e,&m);
        for(i=1;i<=m;i++){
            scanf("%d %d",&a,&b);
            ch[i][0] = a;
            ch[i][1] = b;
        }
        for(i=1;i<=e;i++){
            scanf("%d %d",&a,&b);
            y[i][0] = a;
            y[i][1] = b;
        }
        l = 1;
        r = e;
        while(l<r){
            mid = (l+r)/2;
            mk = 1;
            for(i=1;i<=v;i++){
                p[i]=i;
            }
            for(i=1;i<=mid;i++){
                p[pl(y[i][0])] = pl(y[i][1]);
            }
            for(i=1;i<=m;i++){
                if(pl(ch[i][0])!=pl(ch[i][1])){
                    mk = 0;
                }
            }
            if(mk)     r = mid,rk = 1;
            else       l = mid+1;
        }
        mk = 1;
        for(i=1;i<=v;i++){
            p[i]=i;
        }
        for(i=1;i<=l;i++){
            p[pl(y[i][0])] = pl(y[i][1]);
        }
        for(i=1;i<=m;i++){
            if(pl(ch[i][0])!=pl(ch[i][1])){
                mk = 0;
            }
        }
        if(mk)     printf("C#%d: %d\n",z,l);
        else       printf("C#%d: -1\n",z);
    }
    return 0;
}
/*
1
5 5 5
1 2
1 3
3 2
4 5
2 5
1 5
2 3
1 4
1 3
2 5
printf("C#%d: %d\n",z,l);
*/
