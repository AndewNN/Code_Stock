/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
#define mod  95959
using namespace std;
int dp[100100],a[100100],qsum[100100];
int main()
{
    int i,q,n,k,idx;
    scanf("%d",&q);
    while(q--){
        memset(dp,0,sizeof dp);
        memset(a,0,sizeof a);
        memset(qsum,0,sizeof qsum);
        scanf("%d %d",&n,&k);
        dp[1]=qsum[1]=1;
        for(i=1;i<=n;i++){
            scanf("%d",&a[i]);
        }
        for(i=2;i<=n;i++){
            idx=lower_bound(a+1,a+n+1,a[i]-k)-a-1;
            dp[i]=(qsum[i-1]+95959)-qsum[idx];
            dp[i]%=95959;
            qsum[i] = qsum[i-1]+dp[i];
            qsum[i]%95959;
        }
        printf("%d\n",dp[n]);
    }
    return 0;
}
