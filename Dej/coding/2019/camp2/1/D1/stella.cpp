#include<bits/stdc++.h>
using namespace std;
struct A{
    long long ty,Ma,Ri,Ti,rob;
    bool operator < (const A &o) const{
        if(Ma!=o.Ma)    return Ma < o.Ma;
        else            return Ti > o.Ti;
    }
};
priority_queue<A> hp;
int main()
{
    long long k,i,m,h,ans=0,use=0,a,b,c,d,e,f,g;
    char op,opr;
    scanf("%lld",&k);
    for(i=1;i<=k;i++){
        scanf(" %c",&op);
        if(op=='c'){
            scanf(" %c",&opr);
            if(opr=='n'){
                scanf("%lld",&m);
                hp.push({1,m,1000000,i,0});
            }else if(opr == 'r'){
                scanf("%lld %lld",&m,&h);
                hp.push({2,m,h,i,0});
            }
        }else if(op == 'u'){
            while(!hp.empty()){
                if(hp.top().Ma == 0){
                    hp.pop();
                }else if(hp.top().ty==2 && hp.top().rob != (i-hp.top().Ti)/hp.top().Ri){
                    a = hp.top().ty;
                    b = hp.top().Ma;
                    c = hp.top().Ri;
                    d = hp.top().Ti;
                    f = hp.top().rob;
                    hp.pop();
                    e = (i-d)/c;
                    g = e;
                    e -= f;
                    while(e--){
                        b/=2;
                    }
                    hp.push({a,b,c,d,g});
                }else{
                    break;
                }
            }
            if(!hp.empty()){
            ans+=hp.top().Ma;
            hp.pop();
            }
        }
    }
    printf("%lld\n",ans);
    ans=0;
    while(!hp.empty()){
                if(hp.top().Ma == 0){
                    hp.pop();
                }else if(hp.top().ty==2 && hp.top().rob != (k-hp.top().Ti)/hp.top().Ri){
                    a = hp.top().ty;
                    b = hp.top().Ma;
                    c = hp.top().Ri;
                    d = hp.top().Ti;
                    f = hp.top().rob;
                    hp.pop();
                    e = (k-d)/c;
                    g = e;
                    e -= f;
                    while(e--){
                        b/=2;
                    }
                    hp.push({a,b,c,d,g});
                }else{
                    ans++;
                    hp.pop();
                }
    }
    printf("%lld\n",ans);
    return 0;
}
