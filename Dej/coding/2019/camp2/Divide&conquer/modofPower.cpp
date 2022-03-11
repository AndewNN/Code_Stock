#include<bits/stdc++.h>
using namespace std;
long long P(long long a,long long b,long long c){
    if(b==1) return a%c;
    long long t = P(a,b/2,c)%c;
    if(b%2==0) return (t*t)%c;
    return (t*t*a)%c;
}
int main()
{
    long long a,b,c,q;
    scanf("%lld",&q);
    while(q--){
        scanf("%lld %lld %lld",&a,&b,&c);
        printf("%lld\n",P(a,b,c));
    }
    return 0;
}
