/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int a[15100][2],dp[15100],ma[15100];
int main()
{
    int n,k,i,j,l=1,idx,cou=0,mi = 1e9;
    scanf("%d %d",&n,&k);
    for(i=1; i<=n; i++)
    {
        scanf("%d %d",&a[i][0],&a[i][1]);
        dp[i]=1e9;
    }
    dp[1]=0;
    for(i=1; i<n; i++)
    {
        mi=1e9;
        for(j=i+1; j<=n; j++)
        {
            dp[j]=min(dp[j],abs(a[i][0]-a[j][0])+abs(a[i][1]-a[j][1]));
            if(dp[j]<mi)
                mi=dp[j],idx=j;
        }
        swap(dp[i+1],dp[idx]);
        swap(a[i+1],a[idx]);
    }
    sort(dp+1,dp+n+1);
    for(i=1;i<=n-k+1;i++)
        cou+=dp[i];
    printf("%d",cou);

    return 0;
}
/*

5 2
2 9
9 7
14 2
12 9
16 4

*/
