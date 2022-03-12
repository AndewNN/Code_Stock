#include<bits/stdc++.h>
using namespace std;
int dp[1001000];
int main()
{
    int i,j,q,a,b,c,cou;
    for(i=1;i<=1000000;i++){
        for(j=i;j<=1000000;j+=i){
            dp[j]++;
        }
    }
    scanf("%d",&q);
    while(q--){
        scanf("%d %d %d",&a,&b,&c);
        for(i=a,cou = 0;i<=b;i++){
            if(dp[i]==c){
                cou++;
            }
        }
        printf("%d\n",cou);
    }
    return 0;
}
