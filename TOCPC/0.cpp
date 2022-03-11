/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    long long i,w;
    bool operator < (const A&o) const{
        return w > o.w;
    }
};
vector<A> g[100100];
priority_queue<A> hp;
long long a[100100];
A t;
int main()
{
    long long n,m,i,aa,bb,d;
    scanf("%lld %lld",&n,&m);
    for(i=1; i<=n; i++)
        a[i]=1e18;
    for(i=0;i<m;i++){
        scanf("%lld %lld %lld",&aa,&bb,&d);
        g[aa].push_back({bb,d});
        g[bb].push_back({aa,d});
    }
    a[1]=0;
    hp.push({1,0});
    while(!hp.empty()){
        t=hp.top();
        hp.pop();
        for(auto x:g[t.i]){
            if(a[x.i] > a[t.i]+x.w){
                a[x.i] = a[t.i]+x.w;
                hp.push({x.i,a[x.i]});
            }
        }
    }
    for(i=1;i<=n;i++)
        printf("%lld ",a[i]);
}
