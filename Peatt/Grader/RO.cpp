/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
long long qs[1000100];
map<long long,long long> mp;
char a[1000100];
int main()
{
    long long n,k,ma=-1,i;
    scanf("%lld %lld %s",&n,&k,a+1);
    for(i=1;i<=n;i++){
        if(a[i]=='R')
            qs[i]+=qs[i-1]-k;
        if(a[i]=='O')
            qs[i]+=qs[i-1]+1;
    }
    for(i=1;i<=n;i++){
        if(mp[qs[i]]==0){
            mp[qs[i]]=i;
        }
        else{
            ma=max(ma,i-mp[qs[i]]);
        }
    }
    printf("%lld",ma);
    return 0;
}
/*

15 3
RORROOROOROOORO

*/
