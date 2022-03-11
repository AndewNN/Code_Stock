#include<bits/stdc++.h>
using namespace std;
long long a[1000],b[1000];
int main()
{
    long long n,i,sum=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    for(i=0;i<n;i++){
        scanf("%lld",&b[i]);
    }
    sort(a,a+n);
    sort(b,b+n);
    for(i=0;i<n;i++){
        sum += a[i]*b[i];
    }
    printf("%lld",sum);
    return 0;
}
