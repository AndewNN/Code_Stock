#include<bits/stdc++.h>
using namespace std;
struct A{
    int t,w,v,d,i;
    bool operator < (const A&o) const{
        return w > o.w;
    }
};
struct B{
    int t,w,v,d,i;
    bool operator < (const B&o) const{
        return d > o.d;
    }
};
priority_queue<A> hp;
priority_queue<B> h;
int mk[200100];
int main()
{
    int n,m,i,o,op,w,v,d,x;
    scanf("%d %d",&n,&m);
    n+=m;
    for(i=1;i<=n;i++){
        scanf("%d",&o);
        if(o==1){
            scanf("%d",&op);
            if(op==1){
                scanf("%d %d",&w,&v);
                hp.push({1,w,v,0,i});
            }else if(op==2){
                scanf("%d %d %d",&w,&v,&d);
                hp.push({2,w,v,d,i});
            }else if(op == 3){
                scanf("%d %d %d %d",&w,&v,&d,&x);
                hp.push({3,w,v,d,i});
                h.push({3,x,v,d,i});
            }
        }else if(o==2){
            while(!h.empty() && h.top().d < i){
                hp.push({3,h.top().w,h.top().v,0,h.top().i});
                h.pop();
            }
            while(!hp.empty()){
                if(hp.top().t == 2 && hp.top().d < i){
                    hp.pop();
                }else if(mk[hp.top().i]==1){
                    hp.pop();
                }else{
                    break;
                }
            }
            if(hp.empty()){
                printf("0\n");
            }else{
                printf("%d\n",hp.top().v);
                mk[hp.top().i] = 1;
                hp.pop();
            }
        }
    }
    return 0;
}
/*
5 4
1 1 10 20
1 2 30 10 3
2
2
1 3 40 20 7 5
1 1 30 30
1 2 25 50 7
*/
