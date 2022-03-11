#include<bits/stdc++.h>
using namespace std;
struct A{
    int u,v;
    double w;
    bool operator < (const A&o) const{
        return w > o.w;
    }
};
priority_queue<A> hp;
int p[1010];
int f(int i){
    if(p[i]==i) return i;
    else        return p[i] = f(p[i]);
}
int main()
{
    int n,m,i,a,b,d,e;
    double ans=0,c;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        p[i] = i;
    }
    for(i=0;i<m;i++){
        scanf("%d %d %lf",&a,&b,&c);
        hp.push({a,b,c});
    }
    while(!hp.empty()){
        a = hp.top().u;
        b = hp.top().v;
        c = hp.top().w;
        d = f(a);
        e = f(b);
        hp.pop();
        if(d != e){
            p[d] = e;
            ans+=c;
        }
    }
    printf("%.3lf",ans);
    return 0;
}
