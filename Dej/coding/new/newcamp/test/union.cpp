/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    long long i,j;
    bool operator < (const A&o) const{
        if(i != o.i)
            return i < o.i;
        else
            return j < o.j;
    }
};
A b[1000100];
int main()
{
    long long q,i,ans=0,now=1;
    scanf("%lld",&q);
    for(i=0;i<q;i++){
        scanf("%lld %lld",&b[i].i,&b[i].j);
        b[i].i/=2,b[i].j/=2;
    }
    sort(b,b+q);
    for(i=q-1;i>=0;i--){
        while(now<=b[i].j){
            ans+=b[i].i;
            now++;
        }
    }
    printf("%lld\n",ans*4);
return 0;
}
