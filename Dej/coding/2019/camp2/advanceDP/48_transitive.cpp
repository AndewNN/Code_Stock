#include<bits/stdc++.h>
using namespace std;
int dp[510][510];
int main()
{
    int n,i,j,k,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            dp[i][j] = 1e9;
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&a);
            if(a == 1){
                dp[i][j] = a;
            }
        }
    }
    for(k=1;k<=n;k++){
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                dp[i][j] = min(dp[i][j],dp[i][k]+dp[k][j]);
            }
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(dp[i][j]==1e9){
                printf("0 ");
            }else{
                printf("1 ");
            }
        }
        printf("\n");
    }
    return 0;
}
