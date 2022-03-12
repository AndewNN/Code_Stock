/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int v[5050],dp[15500];
int main()
{
    int n,k,i,j,t,mx,s;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&v[i]);
    for(i=0;i<n;i++)
    {
        scanf("%d",&s);
        for(j=k;j>=(s+1)*8;j--)
            dp[j]=max(dp[j],dp[j-(s+1)*8]+v[i]);
    }
    for(i=0,mx=-1;i<=k;i++)
        mx=max(mx,dp[i]);
    printf("%d",mx);
    return 0;
}
/*

5 90
10 20 30 40 50
3 2 4 5 8

*/
