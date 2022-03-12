/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int a[100100];
long long gcd(long long a,long long b)
{
    if(a<b)
        swap(a,b);
    if(b==0)
        return a;
    if(b==1)
        return 1;
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
    long long ans=1,b,n,cou=0,i,l=0,g=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&b);
        g=gcd(ans,b);
        ans=ans*b/g;
    }
    printf("%lld",ans);
    return 0;
}

