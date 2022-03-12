/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> g[10100],gt[10100];
queue<int>  Q;
int mark[10100],dp[10100],n,m,u,v;
void dfs(int u){
    mark[u]=1;
    for(auto x:g[u]){
        if(!mark[x])
            dfs(x);
    }
    Q.push(u);
}
int main()
{
    int ch = 0,i,u,v;
    scanf("%d %d",&n,&m);
    while(m--){
        scanf("%d %d",&u,&v);
        g[u].push_back(v),gt[v].push_back(u);
    }
    for(i=1;i<=n;i++){
        if(!mark[i])
            dfs(i);
    }
    dp[2]=1;
    while(!Q.empty()){
        u = Q.front(); Q.pop();
        for(auto x:gt[u]){
            dp[x]+=dp[u];
            if(dp[x]>1000000000) ch = 1;
            dp[x] %= 1000000000;
        }
    }
    if(ch)  printf("%09d\n",dp[1]);
    else    printf("%d\n",dp[1]);
    return 0;
}
