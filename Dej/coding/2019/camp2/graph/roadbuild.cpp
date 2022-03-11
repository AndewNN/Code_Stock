#include<bits/stdc++.h>
using namespace std;
struct A{
    int i,w,k,j;
    bool operator < (const A&o) const{
        if(w!=o.w) return w > o.w;
        else       return j > o.j;
    }
};
int dis[1100][2],di[1100][2];
vector<A> g[1100];
priority_queue<A> hp;
int main()
{
    int n,m,i,a,b,c,j,mn=INT_MAX,ans=INT_MAX;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
        dis[i][0] = dis[i][1] = 1<<23;
    }
    for(i=1;i<=m;i++){
        scanf("%d %d %d",&a,&b,&c);
        g[a].push_back({b,c,1,i});
        g[b].push_back({a,c,1,i});
    }
    dis[1][1] = 0;
    hp.push({1,0,1,0});
    while(!hp.empty()){
        a = hp.top().i;
        b = hp.top().w;
        c = hp.top().k;
        j = hp.top().j;
        int tmp=j;
        hp.pop();
        //di[a][c%2] = max(di[a][c%2],j);
        if(a == n && c%2 == 0){
            if(mn>=b){
                mn=b;
                ans=min(ans,j);
            }
        }
        for(auto x:g[a]){
            if(b+x.w <= dis[x.i][(c+1)%2]){
                dis[x.i][(c+1)%2] = dis[a][c%2]+x.w;
                hp.push({x.i,dis[x.i][(c+1)%2],c+1,max(x.j,tmp)});
            }
        }
    }
   /* for(i=1;i<=n;i++){
        printf("%d %d\n",dis[i][0],dis[i][1]);
    } */
    printf("%d %d\n",ans,mn);
    return 0;
}
/*
5 10
4 5 7
3 2 1
3 5 5
5 2 5
1 4 6
2 1 1
4 3 7
1 3 7
4 2 4
1 5 8
*/
