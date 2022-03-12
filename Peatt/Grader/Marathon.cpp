/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
struct A{
    int u,d,w;
    bool operator < (const A&o)const{
    return w>o.w;
    }
};
struct B{
    int p,s;
    bool operator < (const B&o)const{
    return s<o.s;
    }
};
vector<A> g[100100];
priority_queue<A> hp;
A tt;
B sh[100100];
int dis[100100];
int main()
{
    int n,m,k,t,i,u,v,d,w,s,l,r,mid,ch=0,mi=1e9;
    scanf("%d %d %d %d",&n,&m,&k,&t);
    for(i=1;i<=m;i++){
        scanf("%d %d %d %d",&u,&v,&d,&w);
        g[u].pb({v,d,w});
        g[v].pb({u,d,w});
    }
    for(i=0;i<k;i++)
        scanf("%d %d",&sh[i].p,&sh[i].s);
    sort(sh,sh+k);
    sh[k].s=1e9;
    l=0,r=k;
    while(l<r){
        mid=(l+r)/2;
        s=sh[mid].s;
        for(i=1;i<=n;i++)
            dis[i]=1e9;
        dis[1]=0;
        hp.push({1,0,0});
        while(!hp.empty()){
            tt=hp.top();
            hp.pop();
            if(tt.u==n){
                break;
            }
            for(auto x:g[tt.u]){
                if(dis[x.u]>tt.w+x.w && x.d <= s){
                    dis[x.u]=tt.w+x.w;
                    hp.push({x.u,x.d,dis[x.u]});
                }
            }
        }
        while(!hp.empty())  hp.pop();
        if(dis[n]>t)
            l=mid+1;
        else
            r=mid;
    }
//    for(i=0;i<k;i++)
//        mi[i]=sh[i].p;
//    for(i=k-1;i>=0;i--)
//        mi[i]=min(mi[i],mi[i+1]);
    for(i=l;i<k;i++){
        mi = min(mi,sh[i].p);
    }
    if(l<k)
        printf("%d",mi);
    else
        printf("-1");
    return 0;
}
/*

2 2 4 50
1 2 50 100
1 2 100 50
40 70
30 50
70 100
50 200

*/
