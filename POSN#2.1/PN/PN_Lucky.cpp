/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int i,w,n;
    bool operator<(const A&o)const{
        return w > o.w;
    }
};
priority_queue<A> hp;
vector<A> g[50100];
A tmp;
int a[50100],dis[50100][32];
int main()
{
    int q,n,m,l,s,t,u,v,w,i,j;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d %d %d %d",&n,&m,&l,&s,&t);
        for(i=1;i<=n;i++)
            scanf("%d",&a[i]);
        for(i=1;i<=n;i++)
            for(j=0;j<=l;j++)
                dis[i][j]=1e9;
        for(i=0;i<m;i++){
            scanf("%d %d %d",&u,&v,&w);
            g[u].push_back({v,w,a[v]});
        }
        dis[s][0]=0;
        hp.push({s,0,1});
        while(!hp.empty()){
            tmp=hp.top();
            hp.pop();
            for(auto x:g[tmp.i]){
                if(tmp.n==x.n && dis[x.i][tmp.n]>tmp.w+x.w){
                    dis[x.i][tmp.n]=tmp.w+x.w;
                    hp.push({x.i,dis[x.i][tmp.n],x.n+1});
                }
                else if(dis[x.i][tmp.n]>tmp.w+x.w){
                    dis[x.i][tmp.n]=tmp.w+x.w;
                    hp.push({x.i,dis[x.i][tmp.n],tmp.n});
                }
            }
        }
        printf((dis[t][l]!=1e9)? "%d\n":"-1\n",dis[t][l]);
    }
    return 0;
}
/*

1
6 8 3
1 6
0 2 1 1 4 3
1 2 20
1 3 80
3 2 100
2 4 30
4 2 40
2 6 25
2 5 15
5 6 50

*/
