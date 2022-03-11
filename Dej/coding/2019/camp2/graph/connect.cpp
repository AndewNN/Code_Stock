#include<bits/stdc++.h>
using namespace std;
struct A{
    long long i;
    double w;
    bool operator < (const A&o) const{
        return w > o.w;
    }
};
priority_queue<A> hp;
vector<A> g[1100];
long long x[1100],y[1100];
double dis[1100];
int main()
{
    long long a,b,n,w,i,j;
    double m,t;
    scanf("%lld %lld %lf",&n,&w,&m);
    for(i=1;i<=n;i++){
        scanf("%lld %lld",&x[i],&y[i]);
        dis[i]=1<<30;
    }
    while(w--){
        scanf("%lld %lld",&a,&b);
        g[a].push_back({b,0.0});
        g[b].push_back({a,0.0});
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i!=j){
                t = sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
                if(t<=m){
                    g[i].push_back({j,t});
                    g[j].push_back({i,t});
                }
            }
        }
    }
    hp.push({1,0.0});
    dis[1]=0.0;
    while(!hp.empty()){
        i = hp.top().i;
        t = hp.top().w;
        hp.pop();
        for(auto z:g[i]){
            if(dis[i]+z.w<dis[z.i]){
                dis[z.i] = dis[i]+z.w;
                hp.push({z.i,dis[z.i]});
            }
        }
    }
    if(dis[n]==1<<30){
        printf("-1\n");
    }else{
    printf("%d\n",(int)(dis[n]*1000));
    }
    return 0;
}
