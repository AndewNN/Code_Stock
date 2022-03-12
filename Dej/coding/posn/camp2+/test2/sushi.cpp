/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
long long dp[18][100008];
int main()
{
    int n,i,j;
    long long ans =0;
    scanf("%d",&n);
    for(i=1;i<=n;i++) scanf("%lld",&num[i]),dp[1][i]=num[i],ans = max(ans,num[i]);
    build(1,n,1);
    for(i=2;i<=16;i++){
        long long ma = 0;
        for(j=(1<<i)-1;j<=n;j++){
            ma = max(ma,dp[i-1][j-(1<<(i-1))]);
            dp[i][j] = query(1,n,1,j-(1<<(i-1))+1,j);
            ans = max(ans,dp[i][j]);
        }
    }
    printf("%lld",ans);
    return 0;
}
