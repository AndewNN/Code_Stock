#include<bits/stdc++.h>
using namespace std;
struct A{
    long long num;
    bool operator < (const A& o) const{
        return num > o.num;
    }
};
priority_queue<A> hp;
int main()
{
    long long q,n,m,k,i,a,cou,opr,an,ans;
    scanf("%lld",&q);
    while(q--){
        scanf("%lld %lld %lld",&n,&m,&k);
        for(i=0;i<n;i++){
            scanf("%lld",&a);
            hp.push({a});
        }
        for(i=0,cou=0;i<m;i++){
            scanf("%lld",&opr);
            if(opr == 1){
                scanf("%lld",&a);
                a -= cou;
                hp.push({a});
            }else if(opr == 2){
                cou+=k;
            }else if(opr == 3){
                if(!hp.empty()){
                    hp.pop();
                }
            }
        }
        ans = 0,an=0;
        while(!hp.empty()){
            an++;
            ans += (hp.top().num+cou);
            hp.pop();
        }
        printf("%lld %lld\n",an,ans);
    }
    return 0;
}
/*
2
5 6 20
100 150 130 200 1000
3
3
1 160
2
1 158
3
2 6 100
10 20
2
2
3
3
1 100
2
*/
