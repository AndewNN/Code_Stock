#include<bits/stdc++.h>
using namespace std;
struct A{
    int id,rk,in;
    bool operator < (const A&o) const{
        if(rk!=o.rk)  return rk < o.rk;
        else  return in > o.in;
    }
};
priority_queue<A> hp;
int main()
{
    int n,k,i,op,a,b;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&op);
        if(op == 1){
            scanf("%d %d",&a,&b);
            hp.push({a,b,i});
        }else{
            if(!hp.empty()){
                printf("%d\n",hp.top().id);
                hp.pop();
            }else{
                printf("-1\n");
            }
        }
    }
    return 0;
}
