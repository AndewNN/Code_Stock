#include<bits/stdc++.h>
using namespace std;
struct A{
    int i,j,w;
    bool operator < (const A&o) const{
        return w < o.w;
    }
};
priority_queue<A> hp;
int p[2510];
int fi(int i){
    if(p[i]==i) return i;
    else        return p[i]=fi(p[i]);
}
int main()
{
    int n,m,i,a,b,c,s,d,e,ans=1001000,ma;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
        p[i] = i;
    }
    for(i=1;i<=m;i++){
        scanf("%d %d %d",&a,&b,&c);
        hp.push({a,b,c});
    }
    scanf("%d %d %d",&s,&d,&e);
    while(!hp.empty()){
        if(fi(s)==fi(d)){
            hp.pop();
        }
        a = hp.top().i;
        b = hp.top().j;
        c = hp.top().w;
        hp.pop();
        a = fi(a);
        b = fi(b);
        if(a!=b){
            p[a]=b;
            ans = min(ans,c);
        }
    }
    ans--;
    if(e%ans==0){
        printf("%d\n",e/ans);
    }else{
        printf("%d\n",(e/ans)+1);
    }
    return 0;
}
