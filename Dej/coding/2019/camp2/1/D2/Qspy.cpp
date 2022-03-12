#include<bits/stdc++.h>
using namespace std;
struct A{
    int u,v,w;
    bool operator < (const A&o) const{
        return w > o.w;
    }
};
priority_queue<A> hp;
int p[1010];
int fin(int i){
    if(p[i]==i) return i;
    else         return p[i] = fin(p[i]);
}
int main()
{
    int n,i,j,a,u,v,w,b,ans=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        p[i] = i;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&a);
            if(i!=j){
                hp.push({i,j,a});
            }
        }
    }
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        hp.push({0,i,a});
    }
    while(!hp.empty()){
        u = hp.top().u;
        v = hp.top().v;
        w = hp.top().w;
        hp.pop();
        a = fin(u);
        b = fin(v);
        if(a!=b){
            p[a] = b;
            ans += w;
        }
    }
    printf("%d\n",ans);
    return 0;
}
