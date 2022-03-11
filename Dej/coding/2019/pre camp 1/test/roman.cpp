/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int dp[500][5];
int main()
{
    int i,j,a;
    for(i=1;i<=400;i++){
        j = i;
        dp[i][4] += dp[i-1][4] + j/100;
        j%=100;
        if(j/10==9){
            dp[i][4]++;
            dp[i][2]++;
        }else if(j/10 ==4){
            dp[i][3]++;
            dp[i][2]++;
        }else if(j/10 >=5){
            j-=50;
            dp[i][3]++;
            dp[i][2]+=j/10;
        }else{
            dp[i][2]+=j/10;
        }
        dp[i][3] += dp[i-1][3];
        dp[i][2] += dp[i-1][2];
        j%=10;
        if(j==9){
            dp[i][2]++;
            dp[i][0]++;
        }else if(j ==4){
            dp[i][1]++;
            dp[i][0]++;
        }else if(j >=5){
            j-=5;
            dp[i][1]++;
            dp[i][0]+=j;
        }else{
            dp[i][0]+=j;
        }
        dp[i][1] += dp[i-1][1];
        dp[i][0] += dp[i-1][0];
    }
    scanf("%d",&a);
    printf("%d %d %d %d %d",dp[a][0],dp[a][1],dp[a][2],dp[a][3],dp[a][4]);
    return 0;
}
