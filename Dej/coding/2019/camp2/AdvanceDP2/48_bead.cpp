#include<bits/stdc++.h>
using namespace std;
long long a[110],dp[110][110],sum[110];
long long P(long long l,long long r){
    if(l==r) return 0;
    if(dp[l][r]!=-1) return dp[l][r];
    long long minn=1e9,now,k;
    for(k =l;k<r;k++){
        now = P(l,k) + P(k+1,r) + (((sum[k]-sum[l-1])%100)*((sum[r]-sum[k])%100));
        if(now < minn){
            minn = now;
        }
    }
    return dp[l][r] = minn;
}
int main()
{
    long long q,n,i,j;
    scanf("%lld",&q);
    while(q--){
        scanf("%lld",&n);
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                dp[i][j] = -1;
            }
        }
        for(i=1;i<=n;i++){
            scanf("%lld",&a[i]);
            sum[i] = sum[i-1] + a[i];
        }
        printf("%lld\n",P(1,n));
    }
    return 0;
}
