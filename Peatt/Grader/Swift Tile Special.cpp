/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int dp[110][110];
int main()
{
    int i,j,n,k,x,q,ans;
    scanf("%d",&q);
    dp[0][0]=1;
    for(i=1;i<=100;i++)
        for(j=0;j<=100;j++){
            dp[i][j]+=dp[i-1][j];
            dp[i][j]%=9241;
            if(i>1){
                dp[i][j]+=dp[i-2][j];
                if(j>0)
                    dp[i][j]+=dp[i-2][j-1];
                dp[i][j]%=9241;
            }
            for(x=3;j>1&&x<=i;x+=2)
                dp[i][j]+=dp[i-x][j-2]*2,dp[i][j]%=9241;;
            for(x=4;j>1&&x<=i;x+=2)
                dp[i][j]+=dp[i-x][j-2]*2,dp[i][j]%=9241;;
        }
    while(q--){
        scanf("%d %d",&n,&k);
        ans=0;
        for(i=0;i<=k;i++){
            ans+=dp[n][i];
            ans%=9241;
        }
        printf("%d\n",ans);
    }
    return 0;
}
