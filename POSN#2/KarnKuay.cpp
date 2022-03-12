/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
int a[200100],dp[200100];
using namespace std;
int main()
{
    int n,i,j,k,mx=-1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    dp[3]=a[3],dp[4]=a[4],dp[5]=a[5];
    for(i=6;i<=n;i++)
    {
        dp[i]=max(a[i]+dp[i-3],max(a[i]+dp[i-4],a[i]+dp[i-5]));
    }
    for(i=0;i<=n;i++)
        mx=max(mx,dp[i]);
    printf("%d\n",mx);
    return 0;
}
/*

12
1 2 5 4 3 0 6 1 2 7 2 1

*/
