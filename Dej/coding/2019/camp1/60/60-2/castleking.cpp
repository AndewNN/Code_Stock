#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,n,a,sum=0,mx=-1;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&a);
        mx = max(mx,a);
        sum+=(a*2);
    }
    sum+= mx+mx + n;
    printf("%lld",sum);
    return 0;
}
