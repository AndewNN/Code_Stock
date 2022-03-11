/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
long long dp[550][550];
int main()
{
    long long n,x,y,i,j,a,b,c,mi=1e18;
    scanf("%lld %lld %lld",&n,&x,&y);
    for(i=0; i<=x; i++)
        for(j=0;j<=y;j++)
            dp[i][j]=1e18;
    dp[0][0]=0;
    while(n--){
        scanf("%lld %lld %lld",&a,&b,&c);
        for(i=x;i>=0;i--)
            for(j=y;j>=0;j--){
                if(dp[i][j]!=1e18){
                    if(i+a>=x && j+b>=y)
                        mi=min(mi,c+dp[i][j]);
                    else
                        dp[min(i+a,x)][min(j+b,y)]=min(dp[min(i+a,x)][min(j+b,y)],dp[i][j]+c);
                }
        }
    }
    if(mi!=1e18)
        printf("%lld",mi);
    else
        printf("-1");
    return 0;

}
