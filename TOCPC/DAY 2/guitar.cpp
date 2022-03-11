/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
long long p[330][330],dis[330][330][330],s[330];
struct A{
    long long i,st,w,k;
    bool operator < (const A&o) const{
        return w > o.w;
    }
};
priority_queue<A> hp;
A t;
int main(){
    long long n,m,k,i,j,mi=1e18;
    scanf("%lld %lld %lld",&n,&m,&k);
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++){
            scanf("%lld",&p[i][j]);
        }
    if(k>=m){
        printf("0");
        return 0;
    }
    for(i=0;i<=300;i++)
        for(j=0;j<=300;j++)
            for(int ii=0;ii<=300;ii++)
                dis[i][j][ii] = 1e18;
    for(i=1;i<=m;i++)
        scanf("%lld",&s[i]);
    hp.push({0,0,0,0});
    dis[0][0][0]=0;
    while(!hp.empty()){
        t=hp.top();
        hp.pop();
        if(t.i==m){
            printf("%lld",t.w);
            return 0;
        }
        if(dis[t.i][t.st+1][t.k] > t.w+p[s[t.i]][s[t.st+1]]){
            dis[t.i][t.st+1][t.k] = t.w+p[s[t.i]][s[t.st+1]];
            hp.push({t.st+1,t.st+1,dis[t.i][t.st+1][t.k],t.k});
        }

        if(t.k+1 <= k && dis[t.i][t.st+1][t.k] > t.w){
            dis[t.i][t.st+1][t.k+1] = t.w;
            hp.push({t.i,t.st+1,t.w,t.k+1});
        }
        
    }


}