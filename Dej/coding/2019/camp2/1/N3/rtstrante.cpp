#include<bits/stdc++.h>
using namespace std;
struct A{
    int i,j,w;
    bool operator < (const A&o) const{
        return w > o.w;
    }
};
int x[1100],y[1100],p[1100];
int fi(int i){
    if(p[i]==i) return i;
    else        return p[i] = fi(p[i]);
}
priority_queue<A> hp;
int main()
{
    int q,n,i,j,a,b,k,c,d;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&n,&k);
        for(i=0;i<n;i++){
            scanf("%d %d",&x[i],&y[i]);
            p[i] = i;
        }
        for(i=0;i<n;i++){
            for(j=i;j<n;j++){
                if(i!=j){
                    hp.push({i,j,(abs(x[i]-x[j])+abs(y[i]-y[j]))});
                }
            }
        }
        d = n;
        while(!hp.empty() && d > k){
            a = fi(hp.top().i);
            b = fi(hp.top().j);
            c = hp.top().w;
            hp.pop();
            if(a != b){
                d--;
                p[a] = b;
            }
        }
        while(!hp.empty()){
            a = fi(hp.top().i);
            b = fi(hp.top().j);
            if(a==b){
                hp.pop();
            }else{
                break;
            }
        }
        printf("%d\n",hp.top().w);
        while(!hp.empty()){
            hp.pop();
        }
    }
    return 0;
}
