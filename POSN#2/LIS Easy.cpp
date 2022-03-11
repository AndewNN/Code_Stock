/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include <bits/stdc++.h>
using namespace std;
int x[100100],dp[100100],pv[100100],ans[100100];
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&x[i]);
    }
    x[0]=-500;
    dp[0]=0;
    for(i=1;i<=n;i++){
        for(j=0;j<i;j++){
            if(x[i] > x[j] && dp[j]+1>dp[i]){
                dp[i]=dp[j]+1;
                pv[i]=j;
            }
        }
    }
    int mx=-1,st=-1,cnt=0;
    for(i=1;i<=n;i++){
        if(mx < dp[i]){
            mx = dp[i];
            st = i;
        }
    }
    while(st>0){
        ans[cnt++]=x[st];
        st=pv[st];
    }
    printf("%d\n",cnt);
    for(i=cnt-1;i>=0;i--){
        printf("%d ",ans[i]);
    }
    return 0;}
