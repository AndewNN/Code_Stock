/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;
struct A{
    int o,u;
};
vector<int> g;
A a[300010];
int fw[300010];
void upd(int idx,int u){
    while(idx<=300003){
        fw[idx]+=u;
        idx+=idx&-idx;
    }
}
int query(int idx){
    int sum=0;
    while(idx>0){
        sum+=fw[idx];
        idx-=idx&-idx;
    }
    return sum;
}
int main()
{
    int n,i,o,u;
    scanf("%d",&n);
    g.push_back(0);
    for(i=1;i<=n;i++){
        scanf("%d %d",&a[i].o,&a[i].u);
        if(a[i].o==1)
            g.push_back(a[i].u);
    }
    sort(g.begin(),g.end());
    for(i=1;i<g.size();i++)
        mp[g[i]]=i;
    for(i=1;i<=n;i++){
        if(a[i].o==1)
            upd(mp[a[i].u],1);
        else
            printf("%d\n",query(mp[a[i].u]));
    }
    return 0;
}
/*

12
1 5
1 6
1 4
2 4
2 5
2 6
1 8
1 1
2 5
2 1
2 4
2 6

*/
