#include<bits/stdc++.h>
using namespace std;
struct A{
    int bu,buc,di,ty;
    bool operator < (const A & o) const {
        if(bu != o.bu)  return bu > o.bu;
        else   return ty < o.ty;
    }
};
priority_queue<A> hp;
int main()
{
    int q,i,op,a,b,c;
    scanf("%d",&q);
    for(i=0;i<q;i++){
        scanf("%d",&op);
        if(op == 1){
            scanf("%d %d",&a,&b);
            hp.push({a,0,b,2});
        }else if(op == 2){
            scanf("%d",&a);
            hp.push({a,0,100100,1});
        }else if(op == 3){
            scanf("%d %d %d",&a,&b,&c);
            hp.push({a,c,b,3});
        }else{
            while(!hp.empty()){
                if(hp.top().ty == 2 && hp.top().di <= i){
                    hp.pop();
                }else if(hp.top().ty == 3 && hp.top().di <= i){
                    a = hp.top().buc;
                    hp.pop();
                    hp.push({a,0,100100,3});
                }else{
                    break;
                }
            }
            if(hp.empty()){
                printf("GREAN\n");
            }else{
                printf("%d\n",hp.top().bu);
                hp.pop();
            }
        }
    }
    return 0;
}
