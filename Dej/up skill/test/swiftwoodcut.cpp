#include<bits/stdc++.h>
using namespace std;
long long a[1001000];
int main()
{
    long long n,m,i,l,r,mid,sum,b;
    scanf("%lld %lld",&n,&m);
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    l=0,r=2e15;
    while(l<r){
        mid = (l+r+1)/2;
        sum = 0;
        for(i=0;i<n;i++){
            if(a[i]-mid>=0){
                sum+=a[i]-mid;
            }
        }
        if(sum < m)  r = mid-1;
        else         l = mid;
    }
    printf("%lld",l);
    return 0;
}
