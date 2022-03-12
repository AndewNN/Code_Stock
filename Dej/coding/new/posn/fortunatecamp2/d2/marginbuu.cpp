/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long q,n,m,i,ans,num,qsum,dsum;
    scanf("%lld",&q);
    while(q--){
        qsum=dsum=ans=0;
        scanf("%lld",&n);
        while(n--){
            scanf("%lld",&num);
            ans+=num*dsum;
            ans%=1000000007;
            qsum += num;
            qsum %= 1000000007;
            dsum += qsum;
            dsum %= 1000000007;
        }
    printf("%lld\n",ans);
    }
    return 0;
}
