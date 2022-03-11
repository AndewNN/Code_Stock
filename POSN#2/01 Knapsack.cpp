/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int dp[110][10100],p[110],w[110];
int main()
{
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    for(i=1; i<=n; i++)
        scanf("%d %d",&p[i],&w[i]);
    for(i=1; i<=n; i++)
    {
        for(j=0; j<w[i]; j++)
            dp[i][j]=dp[i-1][j];
        for(j=w[i]; j<=m; j++)
            dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+p[i]);
    }
    printf("%d\n",dp[n][m]);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++)
            printf("%d ",dp[i][j]);
        printf("\n");

    }
    return 0;
}
/*

4 8
15 1
10 5
9 3
5 4

*/
