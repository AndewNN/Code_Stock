/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
long long a[1100];
int main()
{
    long long q,i;
    long long b,c,d,n,k,l,r,mid,leum;
    scanf("%lld",&q);
    while(q--){
        scanf("%lld %lld",&n,&k);
        for(i=0;i<n;i++){
            scanf("%lld",&a[i]);
        }
        sort(a,a+n);
        l=0;
        r=sqrt(100000000000000000)+10;
        while(l<r){
            mid = (l+r)/2;
            b=0;
            for(i=0;i<n;i++){
                b+=(mid+1)*(mid+1);
                if(i==0)    continue;
                d = a[i]-a[i-1];
                if(d%2){
                    leum = (d/2)+1;
                    if(leum>mid)    continue;
                    b-=(mid-leum+1)*(mid-leum+2);
                }else{
                    leum = d/2;
                    if(leum>mid)    continue;
                    b-=(mid-leum+1)*(mid-leum+1);
                }
            }
            if(b<k){
                l = mid+1;
            }else{
                r = mid;
            }
        }
        printf("%lld\n",l);
    }
    return 0;
}
