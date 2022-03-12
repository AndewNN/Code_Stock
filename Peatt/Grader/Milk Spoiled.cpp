/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
struct A
{
    int i,t;
    bool operator < (const A&o)const{
        if(i!=o.i)
            return i>o.i;
        return t>o.t;
    }
};
priority_queue<A> hp;
A t;
int main()
{
    int q,n,x,y,z,u,v,sum,ma,l,i;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d %d %d",&n,&x,&y,&z);
        for(i=0;i<n;i++){
            scanf("%d %d",&u,&v);
            hp.push({u,y-x});
            hp.push({v+1,z-y});
        }
        sum=n*x,ma=sum;
        while(!hp.empty()){
            t=hp.top();
            hp.pop();
            if(l==-1){
                l=t.i;
            }
            sum+=t.t;
            ma=max(ma,sum);
            l=t.i;
        }
        printf("%d",ma);
    }
    return 0;
}
/*

1
4 7 9 6
5 8
3 4
13 20
7 10

*/
