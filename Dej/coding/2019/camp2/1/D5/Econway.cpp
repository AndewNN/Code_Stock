#include<bits/stdc++.h>
using namespace std;
int dp[210][210],p[210][210];
int main()
{
    int n,i,j,a,b,ans=-1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&a);
            dp[i][j] = a+dp[i-1][j-1];
            dp[i][j] = max(dp[i][j],max(dp[i-1][j],dp[i][j-1]));
            ans = max(ans,dp[i][j]);
        }
    }
    printf("%d\n",ans);
    return 0;
}
