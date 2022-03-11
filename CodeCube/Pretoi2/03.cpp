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
    int i,w,s;
    bool operator<(const A&o)const
    {
        if(w!=o.w)
            return w>o.w;
    }
};
priority_queue<A> hp;
vector<A> g[100100];
A temp;
int dis[100100][2];
int main()
{
    int n,m,k,t,u,v,w,i,j,ans;
    scanf("%d %d %d %d",&n,&m,&k,&t);
    for(i=0;i<=n;i++)
        for(j=0;j<2;j++)
            dis[i][j]=1<<30;
    while(m--)
    {
        scanf("%d %d %d",&u,&v,&w);
        g[u].push_back({v,w,0});
        g[v].push_back({u,w,0});
    }
    hp.push({1,0,0});
    dis[1][0]=0;
    while(!hp.empty())
    {
        temp=hp.top();
        hp.pop();

        for(auto x:g[temp.i])
        {
            if(dis[x.i][temp.s]>dis[temp.i][temp.s]+x.w)
            {
                dis[x.i][temp.s]=dis[temp.i][temp.s]+x.w;
                hp.push({x.i,dis[x.i][temp.s],temp.s});
            }
            if(temp.s==0)
                if(dis[x.i][temp.s+1]>dis[temp.i][temp.s]+k)
                {
                    dis[x.i][temp.s+1]=dis[temp.i][temp.s]+k;
                    hp.push({x.i,dis[x.i][temp.s+1],temp.s+1});
                }
        }
    }
    ans=min(dis[n][0],dis[n][1]);
    if(ans<=t)
        printf("Happy Winnie the Pooh :3\n%d",ans);
    else
        printf("No Honey TT");
    return 0;
}
