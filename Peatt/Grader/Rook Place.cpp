/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
long long dp[100100];
int main()
{
    int i,n;
    scanf("%d",&n);
    dp[2]=1;
    dp[3]=2;
    for(i=4;i<=n;i++)
        dp[i]=((dp[i-1]+dp[i-2])*(i-1))%1000000007;
    printf("%lld",dp[n]);
    return 0;
}
