/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
map<long long,long long> mp;
char a[1100000];
int main()
{
    long long n,k,i,qs=0,ans=0;
    scanf("%lld %lld %s",&n,&k,a+1);
    for(i=1;i<=n;i++){
        if(a[i]=='O') qs++;
        else            qs-=k;
        if(mp[qs])  ans = max(ans,i-mp[qs]);
        else        mp[qs]=i;
    }
    printf("%lld\n",ans);
    return 0;
}
