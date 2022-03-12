/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
unordered_map<int,int> mp;
struct A{
    int u,v,w;
    bool operator <(const A& o) const {
        return  w > o.w;
    }
};
A edge[71000];
int p[51000];
int fin(int i){
    if(p[i]==i) return i;
    return p[i] = fin(p[i]);
}
int main()
{
	int q,n,m,i,num,ans,u,v,w;
	scanf("%d",&q);
	while(q--){
        scanf("%d %d",&n,&m);
        for(i = 1;i<=n;i++){
            scanf("%d",&num);
            mp[num]=i,p[i]=i;
        }
        for(i=0,ans = 0;i<m;i++){
            scanf("%d %d %d",&u,&v,&w);
            edge[i] = {mp[u],mp[v],w};
            ans += w;
        }
        sort(edge,edge+m);
        for(i=0;i<m;i++){
            if(p[fin(edge[i].u)]!=p[fin(edge[i].v)]){
                ans-=edge[i].w;
                p[fin(edge[i].u)]=fin(edge[i].v);
            }
        }
        printf("%d\n",ans);
        mp.clear();
	}
    return 0;
}
