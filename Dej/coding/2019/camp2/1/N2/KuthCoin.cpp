#include<bits/stdc++.h>
using namespace std;
int dp[101000];
int main()
{
    int q,a,i,j;
    dp[0]=1;
    for(i=0;i<=100000;i++){
        dp[i+1]+=dp[i];
        dp[i+1]%=1000003;
    }
    for(i=0;i<=100000;i++){
        dp[i+5]+=dp[i];
        dp[i+1]%=1000003;
    }
    for(i=0;i<=100000;i++){
        dp[i+10]+=dp[i];
        dp[i+1]%=1000003;
    }
    for(i=0;i<=100000;i++){
        dp[i+25]+=dp[i];
        dp[i+1]%=1000003;
    }
    for(i=0;i<=100000;i++){
        dp[i+50]+=dp[i];
        dp[i+1]%=1000003;
    }
    scanf("%d",&q);
    while(q--){
        scanf("%d",&a);
        printf("%d\n",dp[a]);
    }
    return 0;
}
