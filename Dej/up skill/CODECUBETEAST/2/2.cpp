#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,l,r,mid,a,sum;
    scanf("%lld",&n);
    l = 1;
    r = 1e17;
    while(l<r){
        mid = (l+r)/2;
        a = mid/12;
        sum = (23*mid)+(98*a);
        if(sum >= n)  r = mid;
        else          l = mid +1;
    }
    printf("%lld\n",7*l);
    return 0;
}
