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
        return t<o.t;
    }
};
int a[200100];
priority_queue<A> hp;
A t;
int main()
{
    int n,m,q,i,u,v,l=-1,cou=0,now=1;
    scanf("%d %d %d",&n,&m,&q);
    while(m--){
        scanf("%d %d",&u,&v);
        hp.push({u,1});
        hp.push({u+v,-1});
    }
    a[0] = 1;
    while(!hp.empty()){
        t=hp.top();
        hp.pop();
        if(l==t.i){
            cou++;
        }
        else{
            if(cou%2==1){
                a[now++]=l;
            }
            l=t.i;
            cou=1;
        }
    }
    a[now++] = n+1;
//    for(int i=0;i<now;i++)
//        printf("%d ",a[i]);
//    cout << endl;
    while(q--){
        scanf("%d",&u);
        printf("%d\n",a[upper_bound(a,a+now,u)-a]-a[upper_bound(a,a+now,u)-a-1]);
    }

    return 0;
}
/*

10 3 2
2 4
4 5
3 7
7
5

*/
