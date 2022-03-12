/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
struct A
{
    int i,w;
    bool operator<(const A&o)const
    {
            return w>o.w;
    }
};
priority_queue<A> st;
vector<A> g[1010];
A t;
int dis[1010];
int main()
{
    int n,m,q,i,a,b,w;
    scanf("%d %d %d",&n,&m,&q);
    for(i=1;i<=n;i++)
        dis[i]=1<<30;
    while(m--)
    {
        scanf("%d %d %d",&a,&b,&w);
        g[a].push_back({b,w});
     //   g[b].push_back({a,w});
    }
    st.push({1,0});
    dis[1]=0;
    while(!st.empty())
    {
        t=st.top();
        st.pop();
        for(auto x:g[t.i]){
            if(dis[t.i]+x.w<dis[x.i]){
                dis[x.i]=dis[t.i]+x.w;
                st.push({x.i,dis[x.i]});
            }
        }
    }
    while(q--)
    {
        scanf("%d",&n);
        if(dis[n]==1<<30)
            printf("-1\n");
        else
            printf("%d\n",dis[n]);
    }
    return 0;
}

