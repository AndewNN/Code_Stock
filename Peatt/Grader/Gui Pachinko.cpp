/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
vector<long long> g[100100],ans;
long long a[100100],mx[100100],p[100100],qs[100100];
long long dfs(long long u,long long p){
    long long ma=-1;
    mx[u]=u;
    for(auto x:g[u]){
        if(x==p)    continue;
        ma=max(ma,dfs(x,u));
    }
    return mx[u]=max(ma,mx[u]);
}
void df(long long u,long long p){
    for(auto x:g[u]){

        if(x==p)    continue;
        df(x,u);
    }
    ans.push_back(u);
    return;
}
bool cmp(long long a,long long b){
    return mx[a]<mx[b];
}
int main()
{
    long long n,m,i,v,o,k,r,idx=0;
    scanf("%lld %lld",&n,&m);
    for(i=1;i<=n;i++){
        scanf("%lld",&v);
        if(v==0)    r=i;
        else        g[v].push_back(i);
    }
    dfs(r,r);
    for(i=1;i<=n;i++){
        sort(g[i].begin(),g[i].end(),cmp);
    }
    df(r,r);
    for(i=1;i<=n;i++)
        qs[i]=qs[i-1]+ans[i-1];
    while(m--){

        scanf("%lld",&o);
        if(o==1){
            scanf("%lld",&k);
            idx+=k;
            printf("%lld\n",ans[idx-1]);
        }
        if(o==2){
            scanf("%lld",&k);
            idx-=k;
        }
        if(o==3){
            printf("%lld\n",qs[idx]);
        }
    }

    return 0;
}
/*

7 5
7
7
5
0
4
4
4
1 3
1 1
3
1 3
3

*/
