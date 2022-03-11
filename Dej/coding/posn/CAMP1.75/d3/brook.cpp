/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int dp[1010];
int main()
{
	int n,i,pi;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
        scanf("%d",&pi);
        dp[i]+=2*dp[i-1]-dp[pi-1]+2;
        dp[i] = ((dp[i]%mod)+mod)%mod;
	}
	printf("%d\n",dp[n]);
    return 0;
}
