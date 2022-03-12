#include<bits/stdc++.h>
using namespace std;
long long a[100100],b[100100];
int main()
{
    long long n,k,i,l,r,mid,re;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld",&a[i]);
    }
    for(i=1;i<=n;i++){
        scanf("%lld",&b[i]);
    }
    scanf("%lld",&k);
    l=0,r=3000000;
    while(l<r){
        mid = (l+r+1)/2;
        for(i=1,re=0;i<=n;i++){
            if(a[i]*mid > b[i]){
                re = re + (a[i]*mid) - b[i];
            }
        }
        if(re>k){
            r = mid-1;
        }else{
            l = mid;
        }
    }
    printf("%lld",l);
    return 0;
}
