/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
long long a=1,gcd,n,b[50100],i,j;
long long p(long long x,long long y){
    if(y > x) swap(x,y);
    if(x%y==0) return y;
    else       return p(y,x%y);
}
int main()
{
    scanf("%lld %lld",&n,&gcd);
    b[0]=gcd;
    i=0;
    for(i=1;i<n;i++){
        scanf("%lld",&b[i]);
        gcd = gcd * b[i]/p(b[i],gcd);
    }
    printf("%lld\n",gcd);
    return 0;
}
