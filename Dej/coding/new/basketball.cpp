#include<bits/stdc++.h>
using namespace std;
long long a[100100][3],dp[100100][3];
int main()
{
    long long i,n;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld",&a[i][0]);
    }
    for(i=1;i<=n;i++){
        scanf("%lld",&a[i][1]);
    }
    for(i=1;i<=n;i++){
        dp[i][0]= a[i][0] + max(dp[i-1][1],dp[i-1][2]);
        dp[i][1]= a[i][1] + max(dp[i-1][0],dp[i-1][2]);
        dp[i][2]= max(dp[i-1][0],dp[i-1][1]);
    }
    printf("%lld\n",max(dp[n][0],max(dp[n][1],dp[n][2])));
    return 0;
}
