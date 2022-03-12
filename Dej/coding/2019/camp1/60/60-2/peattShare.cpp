#include<bits/stdc++.h>
using namespace std;
int a[100100],dp[100100],dp2[100100];
int main()
{
    int q,i,n,d,sum,ch;
    scanf("%d",&q);
    while(q--){
        d = 0;
        sum = 0;
        ch = 1;
        memset(dp,0,sizeof dp);
        memset(dp1,0,sizeof dp1);
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            scanf("%d",&a[i]);
            d += a[i];
            dp[i] = dp[i-1]+a[i];
        }
        for(i=n;i>=0;i--){
            dp[i] = dp[i+1]+a[i];
        }
        d/=2;
        for(i=1;sum<=d;i++){
            sum+=a[i];
            if(sum==d){
                printf()
            }
        }
    }
    return 0;
}
