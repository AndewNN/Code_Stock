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
            return i<o.i;
        return t<o.t;
    }
};
vector<A> g;
A t;
int main()
{
    int q,n,x,y,z,u,v,sum,ma,l,i;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d %d %d",&n,&x,&y,&z);
        for(i=0;i<n;i++){
            scanf("%d %d",&u,&v);
            g.push_back({u,y-x});
            g.push_back({v+1,z-y});
        }
        sum=n*x,ma=sum;
        sort(g.begin(),g.end());
        for(i=0;i<g.size();i++){
            sum+=g[i].t;
            ma=max(ma,sum);
        }
        g.clear();
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
