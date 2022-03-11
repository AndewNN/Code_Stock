/*
    TASK:
    LANG: CPP
    AUTHOR: Mark
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> g[100100];
long long v[100100],sum,ans;
long long f(int x,int p){
    long long s=v[x],t;
    for(int i=0;i<g[x].size();i++){
        if(g[x][i]==p)continue;
        t=f(g[x][i],x);
        ans=min(abs(sum-t*2),ans);
        s+=t;
    }
    return s;
}
int main()
{
    int q,n,a,b,i;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        sum=0;
        ans=1e18;
        for(i=1;i<n;i++){
            scanf("%d %d",&a,&b);
            g[a].push_back(b);
            g[b].push_back(a);
        }
        for(i=1;i<=n;i++){
            scanf("%lld",&v[i]);
            sum+=v[i];
        }
        f(1,0);
        printf("%lld",ans);
        for(i=1;i<=n;i++)g[i].clear();
    }
    return 0;
}

