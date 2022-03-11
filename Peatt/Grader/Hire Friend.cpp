/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
struct A
{
    int i,t;
    bool operator < (const A&o)const{
        if(i!=o.i)
            return i>o.i;
        return t<o.t;
    }
};
priority_queue<A> hp;
A t;
int main()
{
    int n,s,e,i,l;
    long long ans=0,sum=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&s,&e);
        hp.push({s,1});
        hp.push({e+1,-1});
    }
    while(!hp.empty()){
        t=hp.top();
        hp.pop();
        if(l==-1){
            l=t.i;
        }
        if(sum-1>0){
        ans+=(sum-1)*(t.i-l);
        }
        sum+=t.t;
        l=t.i;
    }
    printf("%lld",ans);
    return 0;
}
/*

3
1 5
4 8
3 11

*/
