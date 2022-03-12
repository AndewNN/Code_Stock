#include<bits/stdc++.h>
using namespace std;
struct A{
    int i,k;
    bool operator < (const A&o) const{
        return k > o.k;
    }
};
vector<A> g[1010];
priority_queue<A> hp;
int mk[1010],dis[1010];
int main()
{
    int i,n,m,q,a,b,c;
    scanf("%d %d %d",&n,&m,&q);
    for(i=0;i<m;i++){
        scanf("%d %d %d",&a,&b,&c);
        g[a].push_back({b,c});
    }
    for(i=1;i<=n;i++){
        dis[i]=1<<30;
    }
    dis[1]=0;
    hp.push({1,0});
    while(!hp.empty()){
        i = hp.top().i,a=hp.top().k;
        hp.pop();
        mk[i]=1;
        for(auto x:g[i]){
            if(!mk[x.i] && dis[i]+x.k<dis[x.i]){
                dis[x.i] = dis[i]+x.k;
                hp.push({x.i,dis[x.i]});
            }
        }
    }
    while(q--){
        scanf("%d",&i);
        if(dis[i]==1<<30) printf("-1\n");
        else              printf("%d\n",dis[i]);
    }
    return 0;
}
