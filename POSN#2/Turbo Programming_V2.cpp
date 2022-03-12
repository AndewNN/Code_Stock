#include<bits/stdc++.h>
using namespace std;
int dis[1010];
struct A
{
    int v,w;
    bool operator<(const A& o)const
    {
        return w>o.w;
    }
};
priority_queue< A > pq;
vector< pair<int,int> > pa[1005];
int main()
{
    int n,m,q,c,a,b,v,w;
    scanf("%d %d %d",&n,&m,&q);
    while(m--)
    {
        scanf("%d %d %d",&a,&b,&c);
        pa[a].push_back({b,c});
    }
    memset(dis,-1,sizeof(dis));
    pq.push({1,0});
    while(!pq.empty())
    {
        v=pq.top().v;
        w=pq.top().w;
        pq.pop();
        if(dis[v]!=-1)
            continue;
        dis[v]=w;
        for(auto x:pa[v])
            pq.push({x.first,w+x.second});
    }
    while(q--)
    {
        scanf("%d",&c);
        printf("%d\n",dis[c]);
    }
    return 0;
}

