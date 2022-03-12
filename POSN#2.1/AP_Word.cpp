/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
char a[11],b[11];
int dp[3][5010];
using namespace std;
int main()
{
    int q,la,lb,i,j;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&la,&lb);
        for(i=1;i<=la;i++)
            scanf(" %c",&a[i]);
        for(i=1;i<=la;i++)
            scanf(" %c",&b[i]);
        for(i=1;i<=la;i++)
            for(j=1;j<=lb;j++){
                if(a[i]==b[j])
                    dp[i%2][j]=dp[(i+1)%2][j-1]+1;
                else
                    dp[i%2][j]=max(dp[(i+1)%2][j],dp[i%2][j-1]);
            }
        printf("%d\n",la+lb-dp[la%2][lb]);
    }




    return 0;
}
