/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b)
{
    if(a<b)
        swap(a,b);
    if(b==0)
        return a;
    while(a!=b)
    {
        if(a<b)
            swap(a,b);
        if(a%b==0)
            break;
        a%=b;
    }
    return b;
}
int main()
{
    long long a,b,n,cou=0,i,l=0;
    scanf("%lld",&n);
    while(n--){
        scanf("%lld",&a);
        l=gcd(a,l);
        cou+=a;
    }
    printf("%lld",cou/l);
    return 0;
}

