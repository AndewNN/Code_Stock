#include<bits/stdc++.h>
using namespace std;
char a[5100],b[5100];
int dp[2][5100];
int main()
{
    int q,lena,lenb,i,j;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d %s %s",&lena,&lenb,a+1,b+1);
        for(i=1;i<=lena;i++){
            for(j=1;j<=lenb;j++){
                if(a[i]==b[j]){
                    dp[i%2][j] = dp[(i+1)%2][j-1]+1;
                }else{
                    dp[i%2][j] = max(dp[(i+1)%2][j],dp[i%2][(j-1)]);
                }
            }
        }
        printf("%d\n",lena+lenb-dp[lena%2][lenb]);
        for(i=0;i<=1;i++){
            for(j=1;j<=5000;j++){
                dp[i][j] = 0;
            }
        }
    }
    return 0;
}
