#include<bits/stdc++.h>
using namespace std;
long long a[100100],l[100100],r[100100];
int main()
{
    long long q,n,i,j,mi;
    scanf("%lld",&q);
    while(q--){
        mi = -1;
        scanf("%lld",&n);
        for(i=1;i<=n;i++){
            scanf("%lld",&a[i]);
            l[i] = i-1;
            r[i] = i+1;
        }
        for(i=1;i<=n;i++){
            while(a[i]<=a[l[i]] && l[i]!=0){
                l[i] = l[l[i]];
            }
        }
        for(i=n;i>=1;i--){
            while(a[i]<=a[r[i]] && r[i]!=n+1){
                r[i] = r[r[i]];
            }
        }
        for(i=1;i<=n;i++){
            mi = max(mi,(r[i]-l[i]-1)*a[i]);
        }
    printf("%lld\n",mi);
    memset(a,0,sizeof a);
    }
    return 0;
}
