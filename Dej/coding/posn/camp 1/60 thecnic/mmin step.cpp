/*
    TASK: Intro01
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<bits/stdc++.h>int a[1010
using namespace std;
int dp[1000100];
int main()
{
int i,q;
for(i=2;i<=1000000;i++){
    dp[i] = dp[i-1]+1;
    if(i%2==0 && dp[i/2]+1 < dp[i])
        dp[i] = dp[i/2]+1;
    if(i%3==0 && dp[i/3]+1 < dp[i])
        dp[i] = dp[i/3]+1;
}
scanf("%d",&q);
while(q--){
    scanf("%d",&i);
    printf("%d\n",dp[i]);
}
    return 0;
}
