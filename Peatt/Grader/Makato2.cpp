/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int all,mi=1e9;
vector<int> g[100100];
int aa[100100];
int dfs(int u,int p){
    int sum=0,qx = 0, child=0,NotChild=0;
    for(auto x:g[u]){
        if(p==x)    continue;
        child = dfs(x,u);
        sum+=child;
        qx^=child;
    }
    NotChild=(all^qx)^aa[u];
    sum+=NotChild;
    mi=min(mi,sum);
    return (qx^aa[u]);
}
int main()
{
    int n,i,a,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&aa[i]);
        all^=aa[i];
    }
    for(i=1;i<=n-1;i++){
        scanf("%d %d",&a,&b);
        g[a].push_back(b);
        g[b].push_back(a);
    }
    n=dfs(1,1);
    printf("%d\n",mi);
    return 0;
}
/*

5
7 3 8 5 2
4 3
1 5
3 2
3 1

*/
