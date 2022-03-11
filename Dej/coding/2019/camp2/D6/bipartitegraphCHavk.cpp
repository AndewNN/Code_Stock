#include<bits/stdc++.h>
using namespace std;
vector<int> g[100100];
int p[100100],ch,mk[100100];
int pl(int u,int now){
    if(mk[u] && p[u]==now) return 1;
    if(mk[u] && p[u]!=now) return 0;
    mk[u]=1,p[u]=now;
    for(auto x:g[u]){
        if(pl(x,3-now)==0){
            return 0;
        }
    }
    return 1;
}
int main()
{
    int q,n,m,i,j,a,b;
    scanf("%d",&q);
    while(q--){
        ch = 1;
        scanf("%d %d",&n,&m);
        for(i=0;i<m;i++){
            scanf("%d %d",&a,&b);
            g[a].push_back(b);
            g[b].push_back(a);
        }
        for(i=1;i<=n;i++){
            if(mk[i]==0){
                if(pl(i,1)==0){
                    ch=0;
                    break;
                }
            }
        }
        if(ch){
            printf("yes\n");
        }else{
            printf("no\n");
        }
        memset(p,0,sizeof p);
        memset(mk,0,sizeof mk);
        for(i=1;i<=n;i++){
            g[i].clear();
        }
    }
    return 0;
}
