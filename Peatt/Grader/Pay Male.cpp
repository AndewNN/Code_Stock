/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int dp[110][110][110][3];
int pay(int a,int b,int c,int last){
    if(a<0 || b<0 || c<0)   return 0;
    if(dp[a][b][c][last]!=-1)   return dp[a][b][c][last];
    int sum=0;
    if(last==1){
        sum+=pay(a,b-1,c,2),sum%=100003;
        sum+=pay(a,b,c-1,3),sum%=100003;
    }
    if(last==2){
        sum+=pay(a-1,b,c,1),sum%=100003;
        sum+=pay(a,b,c-1,3),sum%=100003;
    }
    if(last==3){
        sum+=pay(a-1,b,c,1),sum%=100003;
        sum+=pay(a,b-1,c,2),sum%=100003;
    }
    return dp[a][b][c][last] = sum;
}
int main()
{
    int i,q,a,b,c,sum=0;
    scanf("%d",&q);
    memset(dp,-1,sizeof dp);
    for(i=1;i<=3;i++)
        dp[0][0][0][i]=1;
    dp[1][0][0][1]=0;
    dp[0][1][0][2]=0;
    dp[0][0][1][3]=0;
    while(q--){
        sum=0;
        scanf("%d %d %d",&a,&b,&c);
        sum+=pay(a-1,b,c,1),sum%=100003;
        sum+=pay(a,b-1,c,2),sum%=100003;
        sum+=pay(a,b,c-1,3),sum%=100003;
        printf("%d\n",sum);
    }


    return 0;
}
