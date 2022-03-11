#include<bits/stdc++.h>
using namespace std;
struct A{
    long long i,j,w;
    vector<pair<long long,long long> > mk;
    bool operator < (const A&o) const{
        return w > o.w;
    }
};
A t,t2;
priority_queue<A> hp;
vector<A> g[110][110];
vector<pair<long long,long long> > b;
long long a[110][110],di[4]={1,-1,0,0},dj[4]={0,0,1,-1},dis[110][110];
int main()
{
    long long n,m,i,j,si,sj,ei,ej,sti,stj,k,ii,jj,ch,c,d,e;
    scanf("%lld %lld %lld %lld %lld %lld",&n,&m,&si,&sj,&ei,&ej);
    scanf("%lld:%lld",&sti,&stj);
    ch = 0;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            scanf("%lld",&a[i][j]);
            dis[i][j] = 1000000800;
            if(a[i][j]<0){
                ch++;
            }
        }
    }
    if(ch >=2){
        while(1){

        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            for(k=0;k<4;k++){
                ii = i + di[k];
                jj = j + dj[k];
                if(ii < 1 || jj < 1 || ii > n || jj > m){
                    continue;
                }
                g[i][j].push_back({ii,jj,a[ii][jj],b});
                if(a[ii][jj] < 0){
                    g[i][j].push_back({ii,jj,0,b});
                }
            }
        }
    }
    hp.push({si,sj,a[si][sj],b});
    dis[si][sj] = a[si][sj];
    while(!hp.empty()){
        t = hp.top();
        hp.pop();
        for(auto x:g[t.i][t.j]){
            if(x.w < 0){
                ch = 1;
                for(auto y:t.mk){
                    if(y.first == x.i && y.second == x.j){
                        ch = 0;
                    }
                }
                if(ch){
                    if(dis[x.i][x.j] > t.w+x.w){
                        dis[x.i][x.j] = t.w+x.w;
                        t2 = t;
                        t2.mk.push_back({x.i,x.j});
                        hp.push({x.i,x.j,dis[x.i][x.j],t2.mk});
                    }
                }
            }else{
                if(dis[x.i][x.j] > t.w+x.w){
                    dis[x.i][x.j] = t.w+x.w;
                    hp.push({x.i,x.j,dis[x.i][x.j],t.mk});
                }
            }
        }
    }
    c = (sti*60) + stj + 1000000800 + dis[ei][ej];
    c %= 720;
    d = c/60;
    e = c%60;
   if(e < 10 && d < 10){
        printf("0%lld:0%lld\n",d,e);
    }else if(d<10 && e >= 10){
        printf("0%lld:%lld\n",d,e);
    }else if(d>=10 && e < 10){
        printf("%lld:0%lld\n",d,e);
    }else{
        printf("%lld:%lld\n",d,e);
    }
    return 0;
}
/*
3 3 1 1 3 3
11:50
4 6 7
8 6 3
10 4 6
*/
