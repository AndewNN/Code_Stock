#include<bits/stdc++.h>
using namespace std;
struct A{
    int i,j,w;
    bool operator < (const A&o) const{
        return w > o.w;
    }
};
priority_queue<A> hp;
int p[1100],dp[1100];
int P(int i){
    if(p[i] == i) return i;
    else  return p[i] = P(p[i]);
}
A t;
int main()
{
    int q,i,j,n,a,b,mi,ans;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        memset(dp,0,sizeof dp);
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                scanf("%d",&a);
                if(i<j){
                    hp.push({i,j,a});
                }
            }
        }
        for(i=1;i<=n;i++){
            p[i] = i;
        }
        while(!hp.empty()){
            t = hp.top();
            hp.pop();
            a = P(t.i);
            b = P(t.j);
            if(a != b){
                p[a] = b;
                dp[t.i]++;
                dp[t.j]++;
            }
        }
        mi = -1;
        for(i=1;i<=n;i++){
            if(dp[i] > mi){
                mi = dp[i];
                ans = i;
            }
        }
        printf("%d %d\n",ans,mi);
    }
    return 0;
}
