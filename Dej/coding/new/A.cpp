#include<bits/stdc++.h>
using namespace std;
long long n,k,x;
int main()
{
    scanf("%lld",&n);
    while(n--){
        scanf("%lld %lld",&k,&x);
        printf("%lld\n",x+(9*(k-1)));
    }
    return 0;
}
