/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
char b[7010][7010];
int dp[7010],a[7010][7010];
int main()
{
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
        scanf(" %s",b[i]);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            a[i][j]=b[i][j]-'0';
    for(i=1;i<n;i++)
        for(j=1;j<m;j++)
            if(a[i][j]!=0)
                a[i][j]=min(a[i][j-1],min(a[i-1][j],a[i-1][j-1]))+1;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            dp[a[i][j]]++;
    for(i=7000;i>=0;i--)
        dp[i]+=dp[i+1];
    for(i=1;i<=min(n,m);i++)
        printf("%d\n",dp[i]);
    return 0;
}
/*

5 5
11001
11111
00111
01111
01101


*/
