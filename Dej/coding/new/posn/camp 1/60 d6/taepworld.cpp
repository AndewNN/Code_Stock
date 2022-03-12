/*
    TASK: Intro01
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
long long dp[1010][1010],a[1000100];
int main()
{
long long r,c,k,i,j,b,cou=0;
scanf("%lld %lld %lld",&r,&c,&k);
for(i=1;i<=r;i++){
    for(j=1;j<=c;j++){
        scanf("%lld",&b);
        dp[i][j] = b+dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
    }
}
for(i=1;i<=r-k+1;i++){
    for(j=1;j<=c-k+1;j++){
    a[cou++]=dp[i+k-1][j+k-1]-dp[i+k-1][j-1]-dp[i-1][j+k-1]+dp[i-1][j-1];
    }
}
sort(a,a+cou);
printf("%lld ",a[cou-1]);
for(i=cou-2;i>=0;i--){
    if(a[i]!=a[i+1]){
       printf("%lld\n",a[i]);
       return 0;
    }
}
    return 0;
}
