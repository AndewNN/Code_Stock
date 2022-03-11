#include<bits/stdc++.h>
using namespace std;
struct A{
    int i,w,s;
    bool operator < (const A&o) const{
        return w > o.w;
    }
};
priority_queue<A> hp;
vector<A> g[5100];
int dis[5100][110];
int main()
{
    int a,b,c,i,j,n,m,k,w,s,mi=INT_MAX;
    scanf("%d %d %d",&n,&m,&k);
    for(i=0;i<m;i++){
        scanf("%d %d %d",&a,&b,&c);
        g[a].push_back({b,c,0});
        g[b].push_back({a,c,0});
    }
    for(i=1;i<=n;i++){
        for(j=0;j<=k;j++){
            dis[i][j]=INT_MAX;
        }
    }
    hp.push({1,0,0});
    dis[1][0] = 0;
    while(!hp.empty()){
        i = hp.top().i;
        w = hp.top().w;
        s = hp.top().s;
        hp.pop();
        if(i==n && s==0){
            for(j=0;j<=k;j++)
                mi=min(mi,dis[n][j]);
            printf("%d\n%d\n%d\n",dis[n][0],mi,dis[n][0]-mi);
            return 0;
        }
        for(auto x:g[i]){
            if(s < k && w + x.w/2 < dis[x.i][s+1]){
                dis[x.i][s+1] = w + x.w/2;
                hp.push({x.i,dis[x.i][s+1],s+1});
            }
            if(w + x.w < dis[x.i][s]){
                dis[x.i][s] = w + x.w;
                hp.push({x.i,dis[x.i][s],s});
            }
        }
    }
    return 0;
}
/*
6 8 1
1 2 4
1 4 2
2 3 4
2 4 6
3 6 6
4 3 12
4 5 10
5 6 4
*/
