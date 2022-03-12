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
    long long a,b;
    scanf("%lld %lld",&a,&b);
    printf("%lld",a*b/gcd(a,b));

    return 0;
}

