/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int dp[260];
int main()
{
    int n,k,all,v,i,j,sum;
    scanf("%d %d",&n,&k);
    all=1<<k;
    for(i=1;i<all;i++)
        dp[i]=2000000000;
    while(n--){
        scanf("%d",&v);
        for(i=0,sum=0;i<k;i++){
            scanf("%d",&j);
            if(j)   sum+=(1<<i);
        }
        for(i=0;i<all;i++)
            dp[i|sum]=min(dp[i|sum],dp[i]+v);
    }
    printf("%d\n",dp[all-1]);


    return 0;
}

