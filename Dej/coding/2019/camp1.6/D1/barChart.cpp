#include<bits/stdc++.h>
using namespace std;
long long a[100100],l[100100],r[100100];
int main()
{
    long long q,n,i,j,la,ans;
    scanf("%lld",&q);
    while(q--){
        ans = -1;
        scanf("%lld",&n);
        for(i=1;i<=n;i++){
            scanf("%lld",&a[i]);
        }
        for(i=1;i<=n;i++){
            l[i]=i-1;
            while(a[i]<=a[l[i]] && l[i]>=1){
                l[i] = l[l[i]];
            }
        }
        for(i=n;i>=1;i--){
            r[i]=i+1;
            while(a[i]<=a[r[i]] && r[i]<=n){
                r[i] = r[r[i]];
            }
        }
        for(i=1;i<=n;i++){
            la = r[i]-l[i]-1;
            ans = max(ans,la*a[i]);
        }
        printf("%lld\n",ans);
        memset(a,0,sizeof a);
        memset(l,0,sizeof l);
        memset(r,0,sizeof r);
    }
    return 0;
}
