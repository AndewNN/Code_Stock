#include<bits/stdc++.h>
using namespace std;
struct A{
    int i,j,w;
    bool operator < (const A&o) const{
        return w > o.w;
    }
};
priority_queue<A> hp;
A t;
int p[50];
int fin(int i){
    if(p[i]==i) return i;
    return p[i] = fin(p[i]);
}
int main()
{
    int n,i,j,k,q,w,m,ans;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&n,&k);
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                scanf("%d",&w);
                if(i!=j){
                    hp.push({i,j,w});
                }
            }
        }
        for(i=1;i<=n;i++){
            p[i] = i;
        }
        ans = 0;
        m = n;
        while(!hp.empty() && m > k){
            t = hp.top();
            hp.pop();
            i = fin(t.i);
            j = fin(t.j);
            if(i!=j && p[i]==i){
                p[i] = j;
                ans += t.w;
                m--;
            }
        }
        printf("%d\n",ans);
        while(!hp.empty()){
            hp.pop();
        }
    }
    return 0;
}
