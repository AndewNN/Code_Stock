#include<bits/stdc++.h>
using namespace std;
int dp[10000000];
int main()
{
    int op,n,i,j,m,o,st;
    char opr;
    scanf("%d %d",&op,&n);
    if(op == 1){
        m = 1 << n;
        for(i=1;i<m;i++){
            scanf(" %c",&opr);
            if(opr=='L'){
                dp[i] = 1;
            }else{
                dp[i] = 2;
            }
        }
        for(i=1;i<=m && i<= 555555;i++){
            st = 1;
            while(st < m){
                if(dp[st]==1){
                    dp[st] = 2;
                    st = st*2;
                }else{
                    dp[st] = 1;
                    st = st*2+1;
                }
            }
            dp[st] = i;
        }
        o = m*2;
        for(i=m;i<o;i++){
            if(dp[i]>0 && dp[i] <= 555555){
                printf("%d ",dp[i]);
            }
        }
    }else{

    }
    return 0;
}
