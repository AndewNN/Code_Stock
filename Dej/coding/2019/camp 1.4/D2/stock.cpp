#include<bits/stdc++.h>
using namespace std;
int a[1001000],dp[1001000];
int main()
{
    int n,i,s,e,q;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    dp[1]=a[1];
    for(i=2;i<=n;i++){
        dp[i]=dp[i-1];
        if(a[i]>a[i-1]){
            dp[i]+=(a[i]-a[i-1]);
        }
    }
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&s,&e);
        printf("%d\n",dp[e]-dp[s]);
    }
    return 0;
}
