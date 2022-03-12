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
    bool operator < (const A& o) const{
        return w > o.w;
    }
};
priority_queue<A> dijk;
vector<A> g[1010];
int dist[1010];
int main()
{
    int n,m,q,i,r,s,w,nowv,noww;
    scanf("%d %d %d",&n,&m,&q);
    for(i=1;i<=n;i++){
        dist[i]=1<<30;
    }
    dist[1]=0;
    while(m--){
        scanf("%d %d %d",&r,&s,&w);
        g[r].push_back({s,w});
    }
    dijk.push({1,0});
    while(!dijk.empty()){
        nowv=dijk.top().v,noww=dijk.top().w; dijk.pop();
        for(auto x:g[nowv]){
            if(noww + x.w < dist[x.v]){
                dist[x.v] = noww + x.w; dijk.push({x.v,dist[x.v]});
            }
        }
    }
    while(q--){
        scanf("%d",&r);
        if(dist[r]==1<<30) printf("-1\n");
        else  printf("%d\n",dist[r]);
    }
    return 0;
}
