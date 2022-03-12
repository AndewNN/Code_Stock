#include<bits/stdc++.h>
using namespace std;
struct A{
    int u,v;
    double w;
    bool operator < (const A & o) const{
        return w > o.w;
    }
};
priority_queue<A> hp;
int p[1010];
int pl(int i){
    if(p[i]==i){
        return i;
    }
    return p[i] = pl(p[i]);
}
int main()
{
    int n,m,u,v,i,c,d;
    double w,ans=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        p[i]=i;
    }
    for(i=1;i<=m;i++){
        scanf("%d %d %lf",&u,&v,&w);
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
            ans += w;
        }
    }
    printf("%.3lf\n",ans);
    return 0;
}
