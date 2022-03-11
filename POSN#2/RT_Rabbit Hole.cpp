/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long r,l,mid,i,n,s,cou;
    scanf("%lld %lld",&n,&s);
    l=0,r=n+1;
    while(l<r)
    {
        mid=(l+r)/2;
        for(cou=0,i=mid;i>0;i/=10)
            cou+=i%10;
        if(mid-cou<s)
            l=mid+1;
        if(mid-cou>=s)
            r=mid;
    }
    if(l>n)
        printf("0\n-1");
    else
    {
        printf("%lld\n%lld",n-l+1,n);
    }
    return 0;
}
