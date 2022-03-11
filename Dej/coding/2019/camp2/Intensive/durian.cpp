#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>v[110];
int p[110],mic[105][105];
vector<int>child[110];
void dfs(int now)
{
    for(auto x:v[now]){
        if(p[x.first]==-1){
            p[x.first]=x.second;
            child[now].push_back(x.first);
            dfs(x.first);
        }
    }
}
int play(int now,int K)
{
    if(mic[now][K]!=-1) return mic[now][K];
    if(K==0) return 0;
    if(child[now].size()==0) return p[now];
    if(child[now].size()==1) return mic[now][K]=play(child[now][0],K-1)+p[now];
    int Max=-1;
    for(int i=0;i<=K-1;i++){
        Max=max(Max,play(child[now][0],i)+play(child[now][1],K-i-1));
    }
    return mic[now][K] = Max+p[now];
}
int main()
{
    int n,k,i,s,e,val;
    memset(p,-1,sizeof p);
    memset(mic,-1,sizeof mic);
    scanf("%d %d",&n,&k);
    for(i=1;i<n;i++){
        scanf("%d %d %d",&s,&e,&val);
        v[s].push_back({e,val});
        v[e].push_back({s,val});
    }
    p[1]=0;
    dfs(1);
    printf("%d\n",play(1,k+1));
    return 0;
}

