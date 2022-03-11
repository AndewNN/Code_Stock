#include<bits/stdc++.h>
using namespace std;
int dp[1100][1100];
int main()
{
    int n,m,k,i,j,mx=-1;
    scanf("%d %d %d",&n,&m,&k);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            scanf("%d",&dp[i][j]);
            dp[i][j] += dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1];
        }
    }
    for(i=k;i<=n;i++){
        for(j=k;j<=m;j++){
            mx = max(mx,dp[i][j]-dp[i-k][j]-dp[i][j-k]+dp[i-k][j-k]);
        }
    }
    printf("%d\n",mx);
    return 0;
}
