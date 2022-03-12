/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
long long u[100100],st[100100];
int main()
{
    long long n,i,l,r,mid,cou,now,co;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
        scanf("%lld",&u[i]);
    for(i=0;i<n;i++)
        scanf("%lld",&st[i]);
    scanf("%lld",&co);
    l=0,r=2e6;
    while(l<r){
        mid=(l+r+1)/2;
        for(i=0,cou=0;i<n;i++)
        {
            now=u[i]*mid-st[i];
            if(now>0)
                cou+=now;
        }
        if(cou<=co)
            l=mid;
        else
            r=mid-1;
    }
    printf("%lld",l);

    return 0;
}
