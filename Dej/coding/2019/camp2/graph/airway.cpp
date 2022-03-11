#include<bits/stdc++.h>
using namespace std;
struct A{
    int i,w;
    bool operator < (const A&o) const{
        return w > o.w;
    }
};
vector<A> g[1010];
priority_queue<A> hp;
int dis[1010];
int main()
{
    int v,e,i,j,si,sj,a,b,t,k,c,w;
    scanf("%d %d %d %d %d %d %d %d",&v,&e,&si,&sj,&a,&b,&t,&k);
    for(i=0;i<=v;i++){
        dis[i] = 1<<30;
    }
    dis[si] = 0;
    g[a].push_back({b,t});
    for(i=0;i<e;i++){
        scanf("%d %d %d",&j,&c,&w);
        g[j].push_back({c,w});
    }
    hp.push({si,0});
    while(!hp.empty()){
        i = hp.top().i;
        w = hp.top().w;
        hp.pop();
        for(auto x : g[i]){
            if(x.w < 0){
                if(dis[i]<=k){
                    if(dis[i]+x.w < dis[x.i]){
                    dis[x.i] = dis[i] + x.w;
                    hp.push({x.i,dis[x.i]});
                    }
                }
            }else{
                if(dis[i]+x.w < dis[x.i]){
                    dis[x.i] = dis[i] + x.w;
                    hp.push({x.i,dis[x.i]});
                }
            }
        }
    }
    printf("%d\n",dis[sj]);
    return 0;
}
