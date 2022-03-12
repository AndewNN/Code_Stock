#include<bits/stdc++.h>
using namespace std;
int a[100100],dp[100100];
int main()
{
    int n,i,mx=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(i=3;i<=n;i++){
        dp[i] = max(dp[i-1],dp[i-3]+a[i]);
        mx = max(mx,dp[i]);
    }
    printf("%d\n",mx);
    return 0;
}
