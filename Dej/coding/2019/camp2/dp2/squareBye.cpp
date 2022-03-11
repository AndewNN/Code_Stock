#include<bits/stdc++.h>
using namespace std;
int dp[100100];
int main()
{
    int i,j,k,q,a,b;
    for(i=1;i<=100000;i++){
        dp[i] = 1<<30;
    }
    for(i=1;i<=100000;i++){
        for(j=1;j<=364;j++){
            k = j*j;
            if(k > i){
                break;
            }
            dp[i] = min(dp[i],dp[i-k]+1);
        }
    }
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&a,&b);
        printf("%d\n",dp[a]%b);
    }
    return 0;
}
