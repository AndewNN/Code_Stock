#include<bits/stdc++.h>
using namespace std;
long long st=1,b,c,ans=0,d;
void P(long long n,long long l,long long r){
    long long mid = (l+r)/2;
    if(r < b ) return ;
    if(l > c) return ;
    if(l>=b && r <= c){
        ans += n;
        return ;
    }
    P(n/2,l,mid-1);
    P(n%2,mid,mid);
    P(n/2,mid+1,r);
}
int main()
{
    long long a,cnt = 0;
    scanf("%lld %lld %lld",&a,&b,&c);
    d = a;
    while(d!=0){
        cnt++;
        d/=2;
    }
    while(cnt--){
        st*=2;
    }
    st -= 1;
    P(a,1,st);
    printf("%lld\n",ans);
    return 0;
}
