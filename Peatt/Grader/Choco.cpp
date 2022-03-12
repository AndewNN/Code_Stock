/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int dp[510][510];
int main()
{
    int q,ii,jj,i,j,k,l;
    for(i=0;i<=32;i++)
        for(j=0;j<=32;j++)
            for(k=500;k>=i;k--)
                for(l=500;l>=j;l--){
                    dp[k][l]=max(dp[k][l],dp[k-i][l-j]+1);
    }
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&ii,&jj);
        printf("%d\n",dp[ii][jj]-1);
    }



    return 0;
}
