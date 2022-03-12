/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int i,a;
    bool operator < (const A&o) const{
        return a > o.a;
    }
};
priority_queue<A> hp;
vector<int> g[100100];
int th[100100],in[100100],tt[100100],mp[10100],mark[100100];
void dfs(int u,int p){
    mark[u] = 1;
    for(auto x: g[u]){
        if(x == p)  continue;
        if(!mark[x])    dfs(x,u);
        tt[u] = min(tt[u],tt[x]);
    }
}
int main()
{
    int n,k,t,i,j,a,u,v,st,cou;
    scanf("%d %d %d",&n,&k,&t);
    for(i=1;i<=n;i++){
        scanf("%d %d",&th[i],&a);
        tt[i] = th[i];
        mp[th[i]]++;
        while(a--){
            scanf("%d",&u);
            g[u].push_back(i);
            in[i]++;
        }
    }
    for(i=1;i<=n;i++){
        if(in[i] == 0){
            dfs(i,i);
        }
    }
    for(i=1;i<=n;i++){
        if(in[i]==0){
            hp.push({i,tt[i]});
        }
    }
    cou = 0;
    while(!hp.empty() && cou < t){
        i = hp.top().i;
        j = hp.top().a;
        hp.pop();
        cou++;
        mp[th[i]]--;
        for(auto x : g[i]){
            in[x]--;
            if(in[x]==0){
                hp.push({x,tt[x]});
            }
        }
    }
    if(mp[1]>0){
        printf("-1\n");
        return 0;
    }
    for(i=1;i<=k;i++){
        if(mp[i]>0 ){
            printf("%d\n",i-1);
            return 0;
        }
    }
    printf("%d\n",k);
    return 0;
}
