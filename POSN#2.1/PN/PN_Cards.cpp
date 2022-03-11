/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int dp[5050][5050],a[5050],b[5050];
int main()
{
    int n,m,i,j,ans=-1,q,now;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d %d",&n,&m);
        for(i=1; i<=n; i++)
            scanf("%d",&a[i]);
        for(i=1; i<=m; i++)
            scanf("%d",&b[i]);
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                now=abs(a[i]-b[j]);
                dp[i][j] = now+dp[i-1][j-1];
                dp[i][j] = max(dp[i][j],max(dp[i-1][j],dp[i][j-1]));
                ans = max(ans,dp[i][j]);
            }
        }
        memset(dp,0,sizeof dp);

        printf("%d\n",ans);
    }

    return 0;
}
