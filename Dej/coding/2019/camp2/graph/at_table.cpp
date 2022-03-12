#include<bits/stdc++.h>
using namespace std;
struct A{
    long long i,j,w;
    bool operator < (const A&o) const{
        return w > o.w;
    }
};
A t;
vector<A> g[40][40];
priority_queue<A> hp;
char a[50][50];
long long dis[50][50],di[4]={1,-1,0,0},dj[4]={0,0,1,-1};
int main()
{
    long long q,n,b,c,i,j,k,ii,jj,mx;
    scanf("%lld",&q);
    while(q--){
        mx = -1;
        scanf("%lld %lld %lld",&n,&b,&c);
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                scanf(" %c",&a[i][j]);
            }
        }
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                for(k=0;k<4;k++){
                    ii = i + di[k];
                    jj = j + dj[k];
                    if(ii < 1 || jj < 1 || ii > n || jj > n){
                        continue;
                    }
                    if(a[i][j]!=a[ii][jj]){
                        g[i][j].push_back({ii,jj,c});
                    }else{
                        g[i][j].push_back({ii,jj,b});
                    }
                }
            }
        }
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                for(ii = 1;ii<=n;ii++){
                    for(jj=1;jj<=n;jj++){
                        dis[ii][jj] = 1 << 30;
                    }
                }
                dis[i][j] = 0;
                hp.push({i,j,0});
                while(!hp.empty()){
                    t = hp.top();
                    hp.pop();
                    for(auto x:g[t.i][t.j]){
                        if(dis[x.i][x.j] > t.w + x.w){
                            dis[x.i][x.j] = t.w + x.w;
                            hp.push({x.i,x.j,dis[x.i][x.j]});
                        }
                    }
                }
                for(ii=1;ii<=n;ii++){
                    for(jj=1;jj<=n;jj++){
                        mx = max(mx,dis[ii][jj]);
                    }
                }
            }
        }
        printf("%lld\n",mx);
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                g[i][j].clear();
            }
        }
    }
    return 0;
}
