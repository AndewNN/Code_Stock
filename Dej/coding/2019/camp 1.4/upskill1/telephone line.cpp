#include<bits/stdc++.h>
using namespace std;
struct A{
    int id,fr;
    bool operator < (const A & o) const{
        return id > o.id;
    }
};
priority_queue<A> hp;
int main()
{
    int n,m,i,a,b,mx=-1;
    long long ans=0;
    scanf("%d %d",&n,&m);
    while(n--){
        scanf("%d %d",&a,&b);
        hp.push({a,b});
    }
    while(!hp.empty()){
        if(mx == -1){
            ans+=hp.top().fr;
        }else{
            if(mx < hp.top().fr){
                ans+= hp.top().fr - mx;
            }
        }
        mx = hp.top().fr;
        hp.pop();
    }
    printf("%lld\n",ans);
    return 0;
}
