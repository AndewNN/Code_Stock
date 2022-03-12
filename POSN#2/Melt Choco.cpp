/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
long long cou=0,state=0,r,l,g,s,gg,m,ans;
void play(long long i,long long ll,long long rr)
{
    if(ll>r||rr<l)      return;
    if(ll>=l&&rr<=r){
        ans+=i;
        return;
    }
    long long mid=(ll+rr)/2;
    play(i/2,ll,mid-1);
    play(i%2,mid,mid);
    play(i/2,mid+1,rr);

}
int main()
{

    scanf("%lld %lld %lld",&g,&l,&r);
    gg=g;
    while(gg>0)
    {
        gg/=2;
        s++;
    }
    m=(1<<s)-1;
    play(g,1,m);
    printf("%lld\n",ans);
    return 0;
}
/*


5 0 5
2 1 2 0 2 1 2
1 0 1 1 1 0 1 0 1 0 1 1 1 0 1




*/
