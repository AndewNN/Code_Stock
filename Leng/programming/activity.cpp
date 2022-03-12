#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,ans=1,i;
    scanf("%lld",&n);
    for(i=n;i>(n+1)/2;i--)
        ans*=i;
    for(i=(n)/2;i>0;i--)
        ans/=i;
    printf("%lld",ans*(1+n%2));

}
