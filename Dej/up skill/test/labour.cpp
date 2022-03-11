#include<bits/stdc++.h>
using namespace std;
long long a[1000100];
int main()
{
    long long n,m,i,mid,l,r,sum;
    scanf("%lld %lld",&n,&m);
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    l=0,r=2e15;
    while(l<r){
        mid = (l+r)/2;
        sum = 0;
        for(i=0;i<n;i++){
            sum+= mid/a[i];
        }
        if(sum < m)  l = mid+1;
        else         r = mid;
    }
    printf("%lld",l);
    return 0;
}
