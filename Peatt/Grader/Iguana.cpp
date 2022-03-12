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
    int n,m,i,u,v,now=0,l=-1,cou=0,x=0,ans=0;
    char o;
    scanf("%d %d",&n,&m);
    while(m--){
        scanf("%d %d",&u,&v);
        hp.push({u,1});
        hp.push({v+1,-1});
    }
    hp.push({1,0});
    hp.push({n+1,0});
    scanf(" %c",&o);
    if(o=='R')  x=3;
    if(o=='G')  x=4;
    if(o=='B')  x=5;
    while(!hp.empty()){
        t=hp.top();
        hp.pop();
        if(l==-1){
            l=t.i;
        }
        ans+=((x-cou)%3)*(t.i-l);
        cou+=t.t;
        cou%=3;
        cou+=3;
        cou%=3;
        l=t.i;
    }
    printf("%d",ans);
    return 0;
}
/*

5 2
1 2
2 3
R

*/
