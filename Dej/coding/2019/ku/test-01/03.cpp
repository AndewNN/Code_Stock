#include<bits/stdc++.h>
using namespace std;
int a[110],b[110],dp[110][110];
int main()
{
    int n,i,j,sum,k,ans=1e9,d1,d2;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d",&a[i],&b[i]);
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            dp[i][j] = abs(a[i]-a[j])+abs(b[i]-b[j]);
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i!=j){
                sum=0;
                for(k=1;k<=n;k++){
                    d1 = abs(a[i]-a[k])+abs(b[i]-b[k]);
                    d2 = abs(a[j]-a[k])+abs(b[j]-b[k]);
                    sum += min(d1,d2);
                }
                ans = min(ans,sum);
            }
        }
    }
    printf("%d",ans);
    return 0;
}
