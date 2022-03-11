/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
long long a[1001000],q[1001000];
int main()
{
    long long n,i,mx,now;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
        if(i%2==0)
            a[i]*=-1;
    }
    for(i=n-1;i>=0;i--)
        q[i]=q[i+1]+a[i];
    for(i=n-1,now=0,mx=-1;i>=0;i--)
    {
        now+=a[i];
        if(now<0)
        {
            now=0;
            continue;
        }
        mx=max(mx,now);
    }
    if(mx<0)
        mx=0;
    printf("%lld",q[0]-2*mx);
    return 0;
}
