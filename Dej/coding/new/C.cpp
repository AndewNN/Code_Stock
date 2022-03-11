#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long l,r,d,q;
    scanf("%lld",&q);
    while(q--){
    scanf("%lld %lld %lld",&l,&r,&d);
    if(d<l){
        printf("%lld\n",d);
    }else{
        if(r%d==0){
            printf("%lld\n",r+d);
        }else{
            printf("%lld\n",r+(d-(r%d)));
        }
    }
    }
    return 0;
}
