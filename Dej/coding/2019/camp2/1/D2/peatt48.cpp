#include<bits/stdc++.h>
using namespace std;
struct A{
    int x,c,tee;
    bool operator < (const A&o) const{
        return x > o.x;
    }
};
priority_queue<A> hp[310];
int p[310][5100],ro[310],mk[310][5100];
int main()
{
    int r,c,i,j,m,a,b,x,k,mi;
    scanf("%d %d %d",&r,&c,&m);
    for(i=0;i<=r;i++){
        for(j=0;j<=c;j++){
            p[i][j] = -1;
        }
    }
    while(m--){
        scanf("%d",&k);
        if(k==1){
            scanf("%d %d %d",&a,&b,&x);
            p[a][b] = x;
            mk[a][b]++;
            hp[a].push({x,b,mk[a][b]});
        }else if(k==2){
            scanf("%d %d",&a,&x);
            ro[a] = x;
            while(!hp[a].empty()){
                p[a][hp[a].top().c] = 0;
                mk[a][hp[a].top().c] = 0;
                hp[a].pop();
            }
        }else if(k==3){
            scanf("%d %d",&a,&b);
            if(p[a][b]==-1){
                printf("%d\n",ro[a]);
            }else{
                printf("%d\n",p[a][b]);
            }
        }else if(k==4){
            mi = 1e9+1;
            for(i=1;i<=r;i++){
                while(!hp[i].empty()){
                    if(hp[i].top().tee != mk[i][hp[i].top().c]){
                        hp[i].pop();
                    }else{
                        break;
                    }
                }
                if(!hp[i].empty()){
                    mi = min(mi,hp[i].top().x);
                }
                if(hp[i].size()!=c){
                mi = min(mi,ro[i]);
                }
            }
            printf("%d\n",mi);
        }
      /*  for(i=1;i<=r;i++){
            for(j=1;j<=c;j++){
                if(p[i][j]==-1){
                    printf("%d ",ro[i]);
                }else{
                    printf("%d ",p[i][j]);
                }
            }
            printf("\n");
        } */
    }
    return 0;
}
