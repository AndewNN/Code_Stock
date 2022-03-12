/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int a[210],dis[210][65100],dd[210][210];
struct A
{
    int u,w,b;
    bool operator < (const A&o)const{
        return w>o.w;
    }
};
vector<A> g[210];
priority_queue<A> hp;
A t;
int main()
{
    int n,m,k,i,j,u,v,w,o;
    scanf("%d %d %d",&n,&m,&k);
    for(i=0;i<k;i++){
        scanf("%d",&u);
        a[u]=1<<i;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            dd[i][j] = dis[i][j] = 1e9;
        }
    }
    for(i=0;i<m;i++){
        scanf("%d %d %d",&u,&v,&w);
        dd[u][v]=w;
        dd[v][u]=w;
    }
    for(o=1;o<=n;o++){
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                dd[i][j] = min(dd[i][j],dd[i][o]+dd[o][j]);
            }
        }
    }
    for(i=1;i<=n;i++)
        for(j=i+1;j<=n;j++){
            if(i!=j && a[i] && a[j]){
                g[i].push_back({j,dd[i][j]});
                g[j].push_back({i,dd[i][j]});
            }
            else if(i==1 && a[j]){
                g[i].push_back({j,dd[i][j]});
                g[j].push_back({i,dd[i][j]});
            }
            else if(a[i] && j==n){
                g[i].push_back({j,dd[i][j]});
                g[j].push_back({i,dd[i][j]});
            }
        }
    for(i=1;i<=n;i++)
        for(j=0;j<65000;j++)
            dis[i][j]=1e9;
    dis[1][0]=0,hp.push({1,0,0});
    /*while(!hp.empty())
        printf("ppo\n"),hp.pop();*/
    while(!hp.empty()){
        t=hp.top();
        hp.pop();
        if(t.u==n && t.b == (1<<k)-1){
            printf("%d",dis[n][(1<<k)-1]);
            return 0;
        }
        for(auto x:g[t.u]){
            if(dis[t.u][t.b]+x.w<dis[x.u][t.b|a[x.u]]){
                dis[x.u][t.b|a[x.u]]=dis[t.u][t.b]+x.w;
                hp.push({x.u,dis[x.u][t.b|a[x.u]],t.b|a[x.u]});
            }
        }
    }
    return 0;
}
/*

7 10 1
4
1 2 1
1 3 2
4 1 2
2 4 2
3 4 1
4 5 1
4 6 3
5 7 1
7 6 2
4 7 4

*/
