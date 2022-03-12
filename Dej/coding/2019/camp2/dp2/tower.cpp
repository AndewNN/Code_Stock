#include<bits/stdc++.h>
using namespace std;
int dp[10100];
vector<int> g[10100];
int main()
{
    int k,n,m,i,a,b,mx=-1;
    scanf("%d %d %d",&k,&n,&m);
    for(i=1;i<=m;i++){
        scanf("%d %d",&a,&b);
        g[a].push_back(b);
    }
    for(i=1;i<=n;i++){
        dp[i] = 1<<30;
    }
    dp[1] = 0;
    for(i=1;i<=n;i++){
        for(auto x:g[i]){
            dp[x] = min(dp[x],dp[i]+1);
        }
    }
    for(i=1;i<=n;i++){
        if(dp[i]<=k){
            mx = max(mx,i);
        }
    }
    printf("%d\n",mx);
    return 0;
}
