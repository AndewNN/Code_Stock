#include<bits/stdc++.h>
using namespace std;
int a[15],dp[1000100];
int main()
{
    int c,m,i,j;
    scanf("%d %d",&c,&m);
    for(i=0;i<c;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<=m;i++){
        dp[i]=1e9;
    }
    for(i=1;i<=m;i++){
        for(j=0;j<c;j++){
            if(i-a[j]>=0){
                dp[i] = min(dp[i],dp[i-a[j]]+1);
            }
        }
    }
    if(dp[m]!=1e9){
        printf("%d\n",dp[m]);
    }else{
        printf("0\n");
    }
    return 0;
}
