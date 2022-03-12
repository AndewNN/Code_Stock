#include<bits/stdc++.h>
using namespace std;
int a[110],dp[110];
int main()
{
    int n,i,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++){
        b = a[i]*i;
        b -= dp[i];
        dp[i+1] = dp[i]+b;
        printf("%d ",b);
    }
    return 0;
}
