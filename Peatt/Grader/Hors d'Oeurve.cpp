/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> g[100100],ans;
int in[100100],chi[100100],dp[100100];
void dfs(int u,int p){
    int ma=-1e9,idx;
    dp[u]=1;
    if(g[u].size()==1)  return;
    for(auto x:g[u]){
        if(x==p)    continue;
        dfs(x,u);
        if(ma<dp[x]){
            ma=dp[x];
            idx=x;
        }
    }
    for(auto x:g[u]){
        if(x==p || x==idx)  continue;
        ans.push_back(dp[x]);
    }
    dp[u]+=dp[idx];
}

int main()
{
    int n,i,a,b;
    scanf("%d",&n);
    n--;
    while(n--){
        scanf("%d %d",&a,&b);
        g[a].push_back(b);
        g[b].push_back(a);
    }
    dfs(1,1);
    ans.push_back(dp[1]);
    sort(ans.begin(),ans.end());
    printf("%d\n",ans.size());
    for(i=ans.size()-1;i>=0;i--)
        printf("%d\n",ans[i]);

    return 0;
}
/*

7
1 2
1 3
3 4
4 5
3 6
6 7

*/
