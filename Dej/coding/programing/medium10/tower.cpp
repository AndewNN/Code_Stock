/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> g[10100];
int ans=-10,mark[10100];
void dfs(int s,int k){
    ans = max(ans,s);
    if(k>0){
    for(auto x:g[s]){
        if(mark[x]==0){
        dfs(x,k-1);
        }
    }
    }
}
int main()
{
    int a,b,k,n,m;
    scanf("%d %d %d",&k,&n,&m);
    while(m--){
        scanf("%d %d",&a,&b);
        g[a].push_back(b);
    }
    dfs(1,k);
    mark[1]=1;
    printf("%d\n",ans);
    return 0;
}
