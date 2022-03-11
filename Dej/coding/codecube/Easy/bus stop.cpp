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
    if(b == 0 || a == 0) return max(a,b);
    if(a%b==0)  return b;
    else    return gcd(b,a%b);
}
int main()
{
    long long n,sum=0,i,ans=1;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
        sum = gcd(sum,a[i]);
        if(i>0){
            ans = a[i]*a[i-1]
        }
    }
    printf("%lld",ans/sum);
    return 0;
}
