/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int a[5010],dp[5010][110],n;
int dis(int now,int k)
{
    if(now>n)           return 0;
    if(dp[now][k]!=-1)  return dp[now][k];
    if(k==0)            return 0;
    int maxx=-1;
    for(int i=0;i<k;i++)
        maxx=max(maxx,dis(now*2,i)+dis(now*2+1,k-i-1));
    return dp[now][k] = maxx+a[now];

}
int main()
{
    int k;
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    memset(dp,-1,sizeof dp);
    int mx=-1;
    for(int i=1;i<=n;i++)
        mx=max(mx,dis(i,k));
    printf("%d",mx);

    return 0;
}
/*

10 5
3 7 1 9 6 2 6 5 4 1

*/
