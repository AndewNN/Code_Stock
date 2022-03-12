#include<bits/stdc++.h>
using namespace std;
int dp[15100],v[5100],w[5100];
int main()
{
    int n,k,i,j,mx=-1;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    for(i=0;i<n;i++){
        scanf("%d",&w[i]);
        w[i] = ((w[i]+1)*8);
    }
    for(i=0;i<n;i++){
        for(j=k;j>=w[i];j--){
            dp[j] = max(dp[j],dp[j-w[i]]+v[i]);
        }
    }
    for(i=0;i<=k;i++){
        mx = max(mx,dp[i]);
    }
    printf("%d\n",mx);
    return 0;
}
