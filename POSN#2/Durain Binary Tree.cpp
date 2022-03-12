/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int v,w;
};
vector<A> g[110];
int l[110],r[110],weight[110],dp[5050][110];
void dfs(int now,int p)
{
    for(auto x:g[now]){
        if(x.v==p)      continue;
        if(l[now]==0)   l[now]=x.v;
        else            r[now]=x.v;
        weight[x.v]=x.w;
        dfs(x.v,now);
    }
}
int dis(int now,int k)
{
    if(dp[now][k]!=-1)  return dp[now][k];
    if(k==0)            return 0;
    int maxx=-1;
    for(int i=0;i<k;i++)
        maxx=max(maxx,dis(z)+dis(r[now],k-i-1));
    return dp[now][k] = maxx+weight[now];
}
int main()
{
    int n,k,u,v,w;
    scanf("%d %d",&n,&k);
    for(int i=1;i<n;i++)
    {
        scanf("%d %d %d",&u,&v,&w);
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    dfs(1,0);
    memset(dp,-1,sizeof dp);
    printf("%d\n",dis(1,k+1));


    return 0;
}
/*

5 2
1 3 1
1 4 10
2 3 20
3 5 20

*/
