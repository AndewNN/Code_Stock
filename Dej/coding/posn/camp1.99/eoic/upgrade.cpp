/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
long long ModofPower(long long a,long long b,long long c){
    if(b==1) return a%c;
    long long t = ModofPower(a,b/2,c);
    if(b%2==0) return (t*t)%c;
    else return (t*t*a)%c;
}
int main()
{
    long long q,n,m,mod,sumn;
    scanf("%lld",&q);
    while(q--){
        scanf("%lld %lld %lld",&n,&m,&mod);
        if(n%2==0){
            sumn = (1+n)*(n/2);
        }else{
            sumn = (n)*(n+1/2);
        }
    //    sumn%=mod;
        printf("%lld\n",ModofPower(sumn,m,mod));
    }
    return 0;
}
