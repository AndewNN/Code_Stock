#include<bits/stdc++.h>
using namespace std;
long long a[110];
int main()
{
    long long n,m,i,l,r,mx=-1,mid,sum,cou;
    scanf("%lld %lld",&n,&m);
    for(i=0;i<m;i++){
        scanf("%lld",&a[i]);
        mx = max(mx,a[i]);
    }
    l = mx ,r = 1e13;
    while(l<r){
        mid = (l+r)/2;
        sum = 0;
        cou =1;
        for(i = 0;i<m;i++){
            sum+=a[i];
            if(sum > mid){
                cou++;
                sum=a[i];
            }
        }
        if(cou <= n)  r = mid;
        else          l = mid+1;
    }
    printf("%lld",l);
    return 0;
}
