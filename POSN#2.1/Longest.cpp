/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int a[1010][1010],dp[1010][1010][4];// l r u d
int main()
{
    int q,n,m,i,j,k,mx;
    scanf("%d",&q);
    while(q--)
    {
        mx=-1;
        scanf("%d %d",&n,&m);
        for(i=1;i<=n;i++)
            for(j=1;j<=m;j++)
                scanf("%d",&a[i][j]);
        for(i=1;i<=n;i++) // l
            for(j=1;j<=m;j++){
                if(a[i][j])
                    dp[i][j][0]=dp[i][j-1][0]+1;
            }
        for(i=1;i<=n;i++) // r
            for(j=m;j>=1;j--){
                if(a[i][j])
                    dp[i][j][1]=dp[i][j+1][1]+1;
            }
        for(j=1;j<=m;j++) // u
            for(i=1;i<=n;i++){
                if(a[i][j])
                    dp[i][j][2]=dp[i-1][j][2]+1;
            }
        for(j=1;j<=m;j++) // d
            for(i=n;i>=1;i--){
                if(a[i][j])
                    dp[i][j][3]=dp[i+1][j][3]+1;
            }
        for(i=1;i<=n;i++)
            for(j=1;j<=m;j++){
                mx=max(mx,max(dp[i][j][0],dp[i][j][1])+max(dp[i][j][2],dp[i][j][3])-1);
            }
        printf("%d\n",mx);
        memset(dp,0,sizeof dp);
    }
    return 0;
}
/*

2
4 5
1 1 1 1 0
1 1 0 1 1
0 1 1 1 1
1 1 1 1 0
2 5
0 1 1 1 0
1 1 0 0 0

*/
