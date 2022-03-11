/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int dp[1010][1010];
int main()
{
    int r,c,i,j,k,num,ans=-1;
    scanf("%d %d %d",&r,&c,&k);
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            scanf("%d",&num);
            dp[i][j] = dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1]+num;
        }
    }
    for(i=k;i<=r;i++){
        for(j=k;j<=c;j++){
            num = dp[i][j]-dp[i-k][j]-dp[i][j-k]+dp[i-k][j-k];
            ans = max(ans,num);
        }
    }
    printf("%d\n",ans);
    return 0;
}
