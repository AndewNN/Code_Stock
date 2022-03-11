/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
long long a[100100];
long long gcd(long long a,long long b){
    if(b>a) swap(a,b);
    if(a==0 || b==0) return max(a,b);
    if(a%b==0) return b;
    else    return gcd(b,a%b);
}
int main()
{
    long long i,n,sum=0,ans=0;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld",&a[i]);
        sum = gcd(sum,a[i]);
    }
    for(i=1;i<=n && sum!= 0;i++){
           ans += a[i]/sum;
    }
    if(sum==0){
        ans = 0;
    }
    printf("%lld",ans);
    return 0;
}
