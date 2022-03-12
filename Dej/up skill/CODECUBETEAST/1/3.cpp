#include<bits/stdc++.h>
using namespace std;
int a[1000100],dp[1000100];
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    dp[1]=0;
    for(i=2;i<=n;i++){
        dp[i]=dp[i-1];
        if(a[i]>a[i-1]){
            dp[i]+=(a[i]-a[i-1]);
        }
    }
    printf("%d",dp[n]);
    return 0;
}
