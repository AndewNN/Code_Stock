/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int dp[100100];
int main()
{
    int n,m,q,i,j;
    scanf("%d",&q);
    for(i=1;i<=100000;i++)
        dp[i]=1e9;
    for(i=1; i<=100000; i++)
        for(j=1; j<=317; j++)
            if(i-j*j>=0)
                dp[i]=min(dp[i],dp[i-j*j]+1);
    while(q--)
    {
        scanf("%d %d",&n,&m);
        printf("%d\n",dp[n]);
    }

    return 0;
}
