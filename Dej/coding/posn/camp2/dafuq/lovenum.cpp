/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
long long dp[1030];
int main()
{
    long long n,num,temp,ans=0,i,j;
    scanf("%lld",&n);
    while(n--){
        scanf("%lld",&num);
        temp=0;
        while(num>0){
            temp|=1<<(num%10);
            num/=10;
        }
        dp[temp]++;
    }
    for(i=0;i<1024;i++)
        for(j=i+1;j<1024;j++)
            if(i&j)
                ans+=(dp[i]*dp[j]);
    for(i=0;i<1024;i++)
        ans+=(dp[i]*(dp[i]-1)/2);
    printf("%lld\n",ans);
    return 0;
}
