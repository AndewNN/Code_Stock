#include<bits/stdc++.h>
using namespace std;
int a[310],b[310],ca[310],cb[310],mk[610],dp[610];
int main()
{
    int x,n,i,j,ans=-112,cou=1,c,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&x);
        a[i]+=a[i-1]+x;
        ca[i]+=ca[i-1];
        if(x == 0){
            ca[i]++;
        }
        mk[x]=1;
    }
    for(i=1;i<=n;i++){
        scanf("%d",&x);
        b[i]+=b[i-1]+x;
        cb[i]+=cb[i-1];
        if(x == 0){
            cb[i]++;
        }
        mk[x]=1;
    }
    for(i=2*n;i>=1;i--){
        if(!mk[i]){
        dp[cou] += dp[cou-1]+i;
        cou++;
        }
    }
    for(i=1;i<=n;i++){
        c = a[i]+b[n]-b[i-1];
        d = ca[i]+cb[n]-cb[i-1];
        c += dp[d];
        ans = max(ans,c);
    }
    printf("%d\n",ans);
    return 0;
}
