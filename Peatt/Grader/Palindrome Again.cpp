/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int dp[2][5050];
char a[5050],b[5050];
int main()
{
    int n,i,j,k,ii;
    scanf("%d %s",&n,a+1);
    for(i=1;i<=n;i++)
        b[i]=a[n-i+1];
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++){
            if(a[i]==b[j])
                dp[i%2][j]=dp[(i+1)%2][j-1]+1;
            else
                dp[i%2][j]=max(dp[i%2][j-1],dp[(i+1)%2][j]);
    }
    printf("%d",n-dp[n%2][n]);
    return 0;
}
