/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int t,w,v,di,ds;
    bool operator < (const A & o) const{
            return w > o.w;
    }
};
priority_queue<A> qu,qu2;
int main()
{
    int i,q,n,m,opr,a,b,c,d,j,co;
    A temp,temp2;
    scanf("%d %d",&n,&m);
    q = n+m;
    for(i=0,co = 0;i<q;i++){
        scanf("%d",&opr);
        if(opr==1){
            scanf("%d",&j);
            if(j==1){
                scanf("%d %d",&a,&b);
                qu.push({1,a,b,0,0});
            }else if(j==2){
                scanf("%d %d %d",&a,&b,&c);
                qu.push({2,a,b,c,0});
            }else if(j==3){
                scanf("%d %d %d %d",&a,&b,&c,&d);
                qu.push({3,d,b,c,a});
            }
        }else{
            while(1){
                if(qu.empty()){
                    printf("0\n"); break;
                }
                temp = qu.top();
                qu.pop();
                if(temp.t == 2 && temp.di <= i){
                    continue;
                }
                if(temp.t == 3 && temp.di <= i){
                    temp.w = temp.ds;
                    temp.di = 200000;
                    qu.push(temp);
                    continue;
                }
                printf("%d\n",temp.v);
                break;
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
2
2
*/
