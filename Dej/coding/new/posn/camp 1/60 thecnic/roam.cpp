/*
    TASK: Intro01
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<bits/stdc++.h>int a[1010
using namespace std;
int dp[100100];
int main()
{
int n,m,a,b,i,q;
scanf("%d %d",&n,&m);
while(m--){
    scanf("%d %d",&a,&b);
    dp[a]++,dp[b+1]--;
}
for(i=1;i<=n;i++){
    dp[i] += dp[i-1];
}
scanf("%d",&q);
while(q--){
    scanf("%d",&a);
    printf("%d\n",dp[a]);
}t
    return 0;
}
