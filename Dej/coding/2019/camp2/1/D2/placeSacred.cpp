#include<bits/stdc++.h>
using namespace std;
struct A{
    long long u,v,w;
    bool operator < (const A&o) const{
        return w < o.w;
    }
};
priority_queue<A> hp;
long long p[200100];
int f(long long i){
    if(p[i]==i) return i;
    else        return p[i] = f(p[i]);
}
int main()
{
    long long n,m,i,u,v,w,ans=0,a,b;
    scanf("%lld %lld",&n,&m);
    for(i=1;i<=n;i++){
        p[i] = i;
    }
    while(m--){
        scanf("%lld %lld %lld",&u,&v,&w);
        hp.push({u,v,w});
    }
    while(!hp.empty()){
        u = hp.top().u;
        v = hp.top().v;
        w = hp.top().w;
        hp.pop();
        a = f(u);
        b = f(v);
        if(a!=b){
            p[a] = b;
            ans += w-1;
        }
    }
    printf("%lld\n",ans);
    return 0;
}
