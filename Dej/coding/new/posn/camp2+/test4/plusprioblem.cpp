/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main()
{
    long long q,n;
    scanf("%lld",&q);
    while(q--){
        scanf("%lld",&n);
        printf("%lld\n",(((n%mod)*((n+1)%mod))/2)%mod);
    }
    return 0;
}
