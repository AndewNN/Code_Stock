/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
char x[1010],y[1010],z[2010];
int dp[1010][1010];
int main()
{
    int n,i,j,la,lb;
    scanf(" %s %s",x+1,y+1);
    la=strlen(x+1),lb=strlen(y+1);
    scanf("%d",&n);
    while(n--){
        scanf(" %s",z+1);
        dp[0][0]=1;
        for(i=1;i<=la;i++)
            if(dp[i-1][0]==1 && x[i]==z[i])
                dp[i][0]=1;
        for(j=1;j<=lb;j++)
            if(dp[0][j-1]==1 && y[j]==z[j])
                dp[0][j]=1;
        for(i=1;i<=la;i++){
            for(j=1;j<=lb;j++){
                if(dp[i-1][j]==1 && x[i]==z[i+j])
                    dp[i][j]=1;
                if(dp[i][j-1]==1 && y[j]==z[i+j])
                    dp[i][j]=1;
            }
        }
        printf(dp[la][lb]? "Yes":"No");
        memset(dp,0,sizeof dp);


    }
    return 0;
}

