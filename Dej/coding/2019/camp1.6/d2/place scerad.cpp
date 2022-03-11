#include<bits/stdc++.h>
using namespace std;
struct A{
    long long u,v,w;
    bool operator < (const A& o) const{
        return w < o.w;
    }
};
priority_queue<A> hp;
long long p[200100];
int pl(long long i){
    if(p[i]==i){
        return i;
    }
    return p[i] = pl(p[i]);
}
int main()
{
    long long n,m,i,u,v,w,c,d,ans = 0;
    scanf("%lld %lld",&n,&m);
    for(i=1;i<=n;i++){
        p[i]=i;
    }
    for(i=1;i<=m;i++){
        scanf("%lld %lld %lld",&u,&v,&w);
        hp.push({u,v,w});
    }
    while(!hp.empty()){
        u = hp.top().u;
        v = hp.top().v;
        w = hp.top().w;
        hp.pop();
        c = pl(u),d = pl(v);
        if(c!=d){
            p[c] = d;
            ans += w-1;
        }
    }
    printf("%lld\n",ans);
    return 0;
}
