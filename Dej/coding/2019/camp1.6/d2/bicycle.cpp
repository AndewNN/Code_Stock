#include<bits/stdc++.h>
using namespace std;
struct A{
    int u,v,w;
    bool operator < (const A & o) const{
        return w < o.w;
    }
};
priority_queue<A> hp;
map<int,int> mp;
int p[50100];
int pl(int i){
    if(p[i]==i){
        return i;
    }
    return p[i] = pl(p[i]);
}
int main()
{
    int q,n,m,i,a,j,u,v,w,b;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&m,&n);
        for(i=1;i<=m;i++){
            scanf("%d",&a);
            mp[a] = i;
            p[i]=i;
        }
        for(i=1;i<=n;i++){
            scanf("%d %d %d",&u,&v,&w);
            hp.push({mp[u],mp[v],w});
        }
        j = 0;
        while(!hp.empty()){
            u = hp.top().u;
            v = hp.top().v;
            w = hp.top().w;
            hp.pop();
            a = pl(u),b = pl(v);
            if(a!=b){
                p[a] = b;
            }else{
                j += w;
            }
        }
        printf("%d\n",j);
    }
    return 0;
}
/*
2
8 10
1 2 3 4 5 6 7 8
1 2 3
1 5 5
2 3 4
2 6 3
3 4 2
3 7 5
4 8 5
5 6 2
6 7 7
7 8 3
*/
