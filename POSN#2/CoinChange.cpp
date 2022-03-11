/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int dp[1000100],co[12];
int main()
{
    int c,m,i,j;
    scanf("%d %d",&c,&m);
    for(i=0;i<c;i++)
        scanf("%d",&co[i]);
    for(i=1;i<=m;i++)
        dp[i]=1e9;
    dp[0] = 0;
    for(i=1;i<=m;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i-co[j]>=0)
                dp[i]=min(dp[i],dp[i-co[j]]+1);
        }
    }
    if(dp[m]==1e9)
        printf("0");
    else
        printf("%d",dp[m]);


    return 0;
}
