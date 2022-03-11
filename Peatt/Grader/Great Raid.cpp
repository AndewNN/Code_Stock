/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
struct A
{
    int u,v,w;
    bool operator < (const A&o)const{
        return w>o.w;
    }
};
int a[100100],p[100100];
priority_queue<A> hp;
A t;
int fr(int u){
    if(p[u]==u)     return u;
    else            return p[u]=fr(p[u]);
}
int main()
{
    int n,m,u,v,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
        p[i]=i;
    scanf("%d",&m);
    for(i=1;i<=m;i++){
        scanf("%d %d",&u,&v);
        hp.push({u,v,a[u]+a[v]});
    }
    while(!hp.empty()){
        t=hp.top();
        hp.pop();
        if(p[fr(t.u)]!=p[fr(t.v)]){
        p[fr(t.u)]=fr(t.v);
        sum+=t.w;
        }
    }
    printf("%d\n",sum);
    return 0;
}
/*

10
1 2 1 2 3 1 2 1 2 1
15
5 1
10 8
5 4
7 10
10 9
2 5
8 4
6 10
7 8
8 5
3 8
6 8
3 1
2 3
3 5



*/
