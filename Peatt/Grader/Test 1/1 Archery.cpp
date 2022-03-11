/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
long long sum;
struct A
{
    long long x,h;
    bool operator < (const A&o)const{
        return x<o.x;
    }
};
A t;
A aa[1000500];
long long ans;
int main()
{
    long long i,n,mih=1e18,mia=1e18,l=-1,cou,a,now,mi=1e18;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld",&aa[i].h);
        mih=min(mih,aa[i].h);
        aa[i+n].h=aa[i].h;
        aa[i].h=0;
    }
    for(i=1;i<=n;i++){
        scanf("%lld",&aa[i].x);
        aa[i+n].x=aa[i].x+1;
        sum+=aa[i].x;
    }
    sort(aa+1,aa+2*n+1);
    aa[2*n+1].x=-1;
    for(i=1;i<=2*n && aa[i].x<=mih ;i++){
        sum+=aa[i].h;
        if(aa[i].x==aa[i+1].x)
            continue;
        now=sum-(aa[i].x*n);
        if(now<mi){
            mi=now;
            ans=aa[i].x;
        }
    }
    printf("%lld %lld\n",ans,mi);


    return 0;
}
/*

3
4 6 5
3 2 4

*/
