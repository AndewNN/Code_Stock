#include<bits/stdc++.h>
using namespace std;
struct A{
    int i,w,o,c;
    bool operator < (const A&o) const{
        return w > o.w;
    }
};
A t;
vector<A> g[110];
priority_queue<A> hp;
int p[110],dis[110][110][2];
int main()
{
    int n,m,i,j,s,d,f,a,b,w,mn=1<<30;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&p[i]);
    }
    scanf("%d %d %d %d",&s,&d,&f,&m);
    while(m--){
        scanf("%d %d %d",&a,&b,&w);
        g[a].push_back({b,w,0,0});
        g[b].push_back({a,w,0,0});
    }
    for(i=0;i<=n;i++){
        for(j=0;j<=f;j++){
            dis[i][j][0] = dis[i][j][1] = 1<<30;
        }
    }
    hp.push({s,0,0,0});
    dis[s][0][0] = 0;
    while(!hp.empty()){
        t = hp.top();
        hp.pop();
        if(t.o +1 <= f && dis[t.i][t.o+1][t.c] > t.w + p[t.i]){
            dis[t.i][t.o+1][t.c] = t.w + p[t.i];
            hp.push({t.i,dis[t.i][t.o+1][t.c],t.o+1,t.c});
        }
        if(t.c == 0 && dis[t.i][f][1] > t.w){
            dis[t.i][f][1] = t.w;
            hp.push({t.i,dis[t.i][f][1],f,1});
        }
        for(auto x : g[t.i]){
            if(t.o >= x.w && dis[x.i][t.o-x.w][t.c] > t.w){
                dis[x.i][t.o-x.w][t.c] = t.w;
                hp.push({x.i,dis[x.i][t.o-x.w][t.c],t.o-x.w,t.c});
            }
        }
    }
    for(i=0;i<=f;i++){
        mn = min(mn,min(dis[d][i][0],dis[d][i][1]+(f-i)*p[d]));
    }
    printf("%d\n",mn);
    return 0;
}
/*
4
7 1 8 10
1 4 100
5
1 2 60
1 3 50
1 4 90
2 4 30
3 4 20
*/
