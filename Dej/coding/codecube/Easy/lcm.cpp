/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int gcd(long long a,long long b){
    if(a%b==0) return b;
    else    return gcd(b,a%b);
}
int main()
{
    long long a,b,t,sum;
    scanf("%lld %lld",&a,&b);
    if(b>a) swap(a,b);
    t = gcd(a,b);
    sum = t*(a/t)*(b/t);
    printf("%lld",sum);
    return 0;
}
