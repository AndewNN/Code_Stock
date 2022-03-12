#include<bits/stdc++.h>
using namespace std;
int n,a[5010],dp[5010][110];
int di(int now,int k){
    int i;
    if(now>n) return 0;
    if(dp[now][k]!=-1) return dp[now][k];
    if(k==0) return 0;
    int maxx = -1;
    for(i=0;i<k;i++){
        maxx = max(maxx,di(now*2,i)+di(now*2+1,k-i-1));
    }
    return dp[now][k] = maxx + a[now];
}
int main()
{
    int k,i;
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    memset(dp,-1,sizeof dp);
    int maxx = -1;
    for(i=1;i<=n;i++){
        maxx = max(maxx,di(i,k));
    }
    printf("%d\n",maxx);
    return 0;
}
