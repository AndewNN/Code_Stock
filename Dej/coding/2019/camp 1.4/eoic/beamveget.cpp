#include<bits/stdc++.h>
using namespace std;
int a[10000100],dp[10000100];
int main()
{
    int q,i,j,m,n;
    for(i=3;i<=10000000;i+=2){
        a[i]=1;
    }
    a[2]=1;
    m = sqrt(10000000);
    for(i=3;i<=m;i+=2){
        if(a[i]){
            for(j =i*i;j<=10000000;j+=i){
                a[j]=0;
            }
        }
    }
    dp[1]=1;
    for(i=2;i<=10000000;i++){
        if(a[i]){
            dp[i]=dp[i-2]+1;
        }else{
            dp[i]=dp[i-1]+1;
        }
    }

    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        printf("%d\n",dp[n]);
    }
    return 0;
}
