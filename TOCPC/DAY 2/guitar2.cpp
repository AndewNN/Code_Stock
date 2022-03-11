#include<bits/stdc++.h>
using namespace std;
struct A{
    long long u,w,k,i;
    bool operator < (const A& o) const{
        return w>o.w;
    }
};
priority_queue<A> hp;
long long cost[310][310],pa[310],dis[310][310][310],nu,nw,nk,ni;
int main(){
    long long n,m,k,i,j,cou=0,kk;
    scanf("%lld %lld %lld",&n,&m,&k);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%lld",&cost[i][j]);
        }
    }
    for(i=1;i<=m;i++){
        scanf("%lld",&pa[i]);
    }
    if(k >= m){
        printf("0\n");
    }else{
        for(i=0;i<=300;i++){
            for(j=0;j<=300;j++){
                for(kk=0;kk<=300;kk++){
                    dis[i][j][kk]=1e18;
                }
            }
        }
        dis[0][0][0] = 0;
        hp.push({0,0,0,0});
        while(!hp.empty()){
            nu = hp.top().u;
            nw = hp.top().w;
            nk = hp.top().k;
            ni = hp.top().i;
            cou++;
            hp.pop();
            if(ni == m){
                printf("%lld\n",nw);
                return 0;
            }
            if(nk+1 <= k){
                if(dis[nu][ni+1][nk] > nw){
                    dis[nu][ni+1][nk+1] = nw;
                    hp.push({nu,nw,nk+1,ni+1});
                }
            }
            if(dis[nu][ni+1][nk] > nw + cost[pa[nu]][pa[ni+1]]){
                dis[nu][ni+1][nk] = nw + cost[pa[nu]][pa[ni+1]];
                hp.push({ni+1,dis[nu][ni+1][nk],nk,ni+1});
            }
        }
    }
    return 0;
}