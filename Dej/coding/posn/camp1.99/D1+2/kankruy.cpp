/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int dp[100100];
int main()
{
    int n,num,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&num);
        dp[i] = dp[i-1];
        if(i>=3) dp[i]=max(dp[i],num+dp[i-3]);
    }
    printf("%d\n",dp[n]);
    return 0;
}
