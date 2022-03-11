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
    int i,w,f,c;
    bool operator<(const A&o)const
    {
        return w > o.w;
    }
};
priority_queue<A> hp;
vector<A> g[110];
A t;
int dis[110][110][2],p[110];
int main()
{
    int n,i,j,m,s,d,f,u,v,w,mn=1e9;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
        scanf("%d",&p[i]);
    scanf("%d %d %d %d",&s,&d,&f,&m);
    while(m--)
    {
        scanf("%d %d %d",&u,&v,&w);
        g[u].push_back({v,w,0,0});
        g[v].push_back({u,w,0,0});
    }
    for(i=0; i<=n; i++)
        for(j=0; j<=f; j++)
            dis[i][j][0]=dis[i][j][1]=1e9;
    hp.push({s,0,0,0});
    dis[s][0][0]=0;
    while(!hp.empty())
    {
        t=hp.top();
        hp.pop();
        if(t.f+1<=f&&dis[t.i][t.f+1][t.c]>t.w+p[t.i])
        {
            dis[t.i][t.f+1][t.c]=t.w+p[t.i];
            hp.push({t.i,dis[t.i][t.f+1][t.c],t.f+1,t.c});
        }
        if(t.c==0&&dis[t.i][f][1]>t.w)
        {
            dis[t.i][f][1]=t.w;
            hp.push({t.i,dis[t.i][f][1],f,1});
        }
        for(auto x : g[t.i])
        {
            if(t.f>=x.w&&dis[x.i][t.f-x.w][t.c]>t.w)
            {
                dis[x.i][t.f-x.w][t.c]=t.w;
                hp.push({x.i,dis[x.i][t.f-x.w][t.c],t.f-x.w,t.c});
            }
        }
    }
    for(i=0;i<=f;i++)
        mn=min(mn,min(dis[d][i][0],dis[d][i][1]+(f-i)*p[d]));
    printf("%d\n",mn);
    return 0;
}
/*

4
7 1 8 10
1 4 100
5
1 2 60
1 3 50
1 4 90
2 4 30
3 4 20

*/
