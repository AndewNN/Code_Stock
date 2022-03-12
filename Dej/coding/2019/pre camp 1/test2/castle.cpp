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
    long long ma = -1,n,m,i,sum=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&m);
        ma = max(ma,m);
        sum+= 2*m;
    }
    sum+= n;
    sum+= 2*ma;
    printf("%lld\n",sum);
    return 0;
}
