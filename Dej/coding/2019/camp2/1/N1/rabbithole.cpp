#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,s,l,r,mid,i,a,b,c;
    scanf("%lld %lld",&n,&s);
    l=0,r=n;
    while(l<r){
        mid = (l+r)/2;
        b = mid;
        c = 0;
        while(b>0){
            c+=(b%10);
            b/=10;
        }
        if(mid-c>=s)    r = mid;
        else            l = mid+1;
    }
    a = l;
    c = 0;
    while(a>0){
        c+=(a%10);
        a/=10;
    }
    if(l-c>=s)  printf("%lld\n%lld",n-l+1,n);
    else        printf("0\n-1");
    return 0;
}
