/*
    TASK: Intro01
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int dp[100100];
int main()
{
int q,n,i,idx,ch;
scanf("%d",&q);
while(q--)
{
    scanf("%d",&n);
    memset(dp,0,sizeof dp);
    for(i=1;i<=n;i++){
        scanf("%d",&dp[i]);
        dp[i] += dp[i-1];
    }
        ch=1;
    if(dp[n]%2==0){
        for(i=0;i<n;i++){
            idx = lower_bound(dp+1,dp+1+n,dp[n]/2+dp[i])-dp;
            if(dp[idx]==dp[n]/2+dp[i]){
             ch=0;
             if(i==0){
                printf("%d\n",idx);
             }else{
                printf("%d %d\n",i,idx);

             }
             break;
            }
        }
    }
    if(ch){
        printf("NO\n");
    }
}
    return 0;
}
