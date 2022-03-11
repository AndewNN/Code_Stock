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
int i,n,q,a,b;
scanf("%d %d",&n,&q);
for(i=1;i<=n;i++){
    scanf("%d",&dp[i]);
    dp[i]^=dp[i-1];
}
while(q--){
    scanf("%d %d",&a,&b);
    printf("%d\n",dp[b]^dp[a-1]);
}
    return 0;
}
