#include<bits/stdc++.h>
using namespace std;
struct A{
    int u,v,w;
    bool operator < (const A& o) const{
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
    int n,i,j,w,a,b,ans=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&w);
            if(i!=j){
                hp.push({i,j,w});
            }
        }
    }
    for(i=1;i<=n;i++){
        p[i] = i;
        scanf("%d",&w);
        hp.push({0,i,w});
    }
    while(!hp.empty()){
        i = hp.top().u;
        j = hp.top().v;
        w = hp.top().w;
        hp.pop();
        a = pl(i),b = pl(j);
        if(a!=b){
            p[a] = b;
            ans+=w;
        }
    }
    printf("%d\n",ans);
    return 0;
}
