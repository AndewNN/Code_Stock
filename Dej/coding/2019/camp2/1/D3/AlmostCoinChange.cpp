#include<bits/stdc++.h>
using namespace std;
int dp[2001000 ],a[50];
int main()
{
    int n,m,k,b,i,j,z,mi,x;
    for(i=1;i<=2000020;i++){
        dp[i] = 1e9;
    }
    scanf("%d %d %d",&n,&m,&k);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    z = m+k;
    for(j=0;j<n;j++){
        for(i=1;i<=z;i++){
            if(i-a[j]>=0){
                dp[i] = min(dp[i],dp[i-a[j]]+1);
            }
        }
    }
    mi = 1000000000;
    x = m;
    for(i=m;i<=z;i++){
        if(dp[i]<mi){
            mi = dp[i];
            x = i;
        }
    }
    if(mi==1000000000){
        printf("-1\n");
    }else{
        printf("%d\n%d",mi,x-m);
    }
    return 0;
}
