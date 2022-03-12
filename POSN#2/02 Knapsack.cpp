/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int dp[10010];
int main()
{
    int n,m,i,j,a,b,mx;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        for(j=m;j>=b;j--)
        {
            dp[j]=max(dp[j],dp[j-b]+a);
        }
    }
    for(mx=-1,i=0;i<=m;i++)
        mx=max(mx,dp[i]);
    printf("%d\n",mx);

    return 0;
}
