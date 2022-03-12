#include<bits/stdc++.h>
using namespace std;
long long a[1100],b[1100];
int main()
{
    long long n,i,ans=0,c;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    sort(a,a+n);
    for(i=0;i<n;i++){
        scanf("%lld",&b[i]);
    }
    sort(b,b+n);
    c=n-1;
    for(i=0;i<n;i++,c--){
        ans += a[i]*b[c];
    }
    printf("%lld",ans);
    return 0;
}
