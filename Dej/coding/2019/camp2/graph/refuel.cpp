#include<bits/stdc++.h>
using namespace std;
struct A{
    int i,w,o;
    bool operator < (const A&o) const{
        return w > o.w;
    }
};
A tmp;
priority_queue<A> hp;
vector<A> g[1100];
int p[1100],dis[1100][110];
int main()
{
    int q,n,m,i,j,c,s,e,u,v,d,mn;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&n,&m);
        for(i=0;i<n;i++){
            scanf("%d",&p[i]);
        }
        for(i=1;i<=m;i++){
            scanf("%d %d %d",&u,&v,&d);
            g[u].push_back({v,d,0});
            g[v].push_back({u,d,0});
        }
        scanf("%d %d %d",&c,&s,&e);
        for(i=0;i<n;i++){
            for(j=0;j<=c;j++){
                dis[i][j] = 1<<30;
            }
        }
        hp.push({s,0,0});
        dis[s][0] = 0;
        while(!hp.empty()){
            tmp = hp.top();
            hp.pop();
            if(tmp.i == e){
                break;
            }
            if(tmp.o+1 <= c && tmp.w + p[tmp.i] < dis[tmp.i][tmp.o+1]){
                dis[tmp.i][tmp.o+1] = tmp.w + p[tmp.i];
                hp.push({tmp.i,dis[tmp.i][tmp.o+1],tmp.o+1});
            }
            for(auto x:g[tmp.i]){
                if(tmp.o >= x.w && dis[x.i][tmp.o-x.w] > tmp.w){
                    dis[x.i][tmp.o-x.w] = tmp.w;
                    hp.push({x.i,dis[x.i][tmp.o-x.w],tmp.o-x.w});
                }
            }
        }
        for(i=0,mn=1<<30;i<=c;i++){
            mn = min(mn,dis[e][i]);
        }
        if(mn == 1 << 30){
            printf("-99\n");
        }else{
            printf("%d\n",mn);
        }
        for(i=0;i<=n;i++){
            g[i].clear();
        }
        while(!hp.empty()){
            hp.pop();
        }
    }
    return 0;
}
