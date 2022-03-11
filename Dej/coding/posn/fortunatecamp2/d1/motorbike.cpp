 /*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int v,w;
    bool operator < (const A&o) const{
    if(w!=o.w) return w > o.w;
    else       return v > o.v;
    }
};
priority_queue<A> dijk,ans;
typedef pair<int,int> PII;
PII city[51000];
vector<A> g[51000];
int dis[51000],mark[51000];
int main()
{
    int n,p,m,e,i,u,v,w;
    scanf("%d %d %d %d",&n,&p,&m,&e);
    for(i=1;i<=p;i++){
        scanf("%d %d",&city[i].first,&city[i].second);
    }
    for(i=0;i<m;i++){
        scanf("%d %d %d",&u,&v,&w);
        g[u].push_back({v,w}),g[v].push_back({u,w});
    }
    dijk.push({e,0});
    for(i=1;i<=n;i++){
        dis[i] = 1<<30;
    }
    dis[e]=0;
    memset(mark,-1,sizeof mark);
    while(!dijk.empty()){
        u=dijk.top().v,w=dijk.top().w; dijk.pop();
        if(mark[u]==1)
            continue;
        mark[u]=1;
        for(auto x : g[u]){
            if(dis[u]+x.w < dis[x.v]){
                dis[x.v] = dis[u]+x.w;
                dijk.push({x.v,dis[x.v]});
            }
        }
    }
    for(i=1;i<=p;i++)
        ans.push({i,dis[city[i].first]/city[i].second});
    while(!ans.empty()){
        printf("%d ",ans.top().v); ans.pop();
    }
    return 0;
}
