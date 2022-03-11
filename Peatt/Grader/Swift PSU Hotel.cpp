/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int a[100100],qs[100100],dp[100100][110];
int main()
{
    int n,k,p,i,j;
    scanf("%d %d %d",&n,&k,&p);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
        qs[i]=qs[i-1]+a[i];
    }
    if(n<=k*p){
        printf("%d\n",qs[n]);
        return 0;
    }
    for(i=p;i<=n;i++){
        for(j=1;j<=k;j++){
            dp[i][j]=qs[i]-qs[i-p]+dp[i-p][j-1];
            dp[i][j]=max(dp[i][j],dp[i-1][j]);
        }
    }
    printf("%d\n",dp[n][k]);
    return 0;
}
