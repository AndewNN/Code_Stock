/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int u,w;
    bool operator < (const A&o)const{
        return w>o.w;
    }
};
priority_queue<A> hp;
vector<A> g[10010];
A t;
int dis[10010],dis2[10010];
int main()
{
    int n,m,x,y,z,i,u,v,w,mi=1e9,idx;
    scanf("%d %d %d %d %d",&n,&m,&x,&y,&z);
    for(i=0;i<=n;i++)
        dis[i]=dis2[i]=1e9;
    while(m--)
    {
        scanf("%d %d %d",&u,&v,&w);
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    dis[x]=0;
    hp.push({x,0});
    while(!hp.empty()){
        t=hp.top();
        hp.pop();
        for(auto xx:g[t.u]){
            if(t.w+xx.w<dis[xx.u]){
                dis[xx.u]=t.w+xx.w;
                hp.push({xx.u,t.w+xx.w});
            }
        }
    }
    dis2[y]=0;
    hp.push({y,0});
    while(!hp.empty()){
        t=hp.top();
        hp.pop();
        for(auto xx:g[t.u]){
            if(t.w+xx.w<dis2[xx.u]){
                dis2[xx.u]=t.w+xx.w;
                hp.push({xx.u,t.w+xx.w});
            }
        }
    }
    for(i=0;i<n;i++){
        if(dis[i]<=z && dis2[i]<mi){
            idx=i;
            mi=dis2[i];
        }

    }
    printf("%d %d %d",idx,dis[idx],dis2[idx]);


    return 0;
}
/*

8 11
0 5 40
0 1 10
0 2 10
1 3 10
1 5 70
2 3 10
2 4 30
2 6 10
3 5 30
4 5 20
6 7 15
7 5 20

*/
