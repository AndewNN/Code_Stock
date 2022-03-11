#include<bits/stdc++.h>
using namespace std;
int dp[1001000];
int main()
{
    int q,mx=-1,i;
    scanf("%d",&q);
    for(i=1;i<=q;i++){
        scanf("%d",&dp[i]);
    }
    for(i=q;i>=1;i--){
        mx = max(dp[i],mx);
        if(dp[i]<=mx) dp[i]=mx-dp[i];
    }
    mx = -1;
    for(i=1;i<=q;i++){
        mx = max(dp[i],mx);
    }
    printf("%d",mx);
    return 0;
}
