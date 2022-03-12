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
    int i,w,t;
    bool operator<(const A&o)const
    {
        if(w!=o.w)
            return w>o.w;
    }
};
priority_queue<A> hp;
vector<A> g[1010];
A temp;
int dis[1010];
int main()
{
    int v,e,x,y,a,b,t,k,i,ai,bi,ti;
    scanf("%d %d %d %d",&v,&e,&x,&y);
    for(i=0; i<=v; i++)
        dis[i]=1<<30;
    scanf("%d %d %d %d",&a,&b,&t,&k);
    g[a].push_back({b,t,k});
    for(i=0; i<e; i++)
    {
        scanf("%d %d %d",&ai,&bi,&ti);
        g[ai].push_back({bi,ti,1<<30});
    }
    hp.push({x,0,1<<30});
    dis[x]=0;
    while(!hp.empty())
    {
        temp=hp.top();
        hp.pop();
        for(auto j:g[temp.i])
        {
            if(j.t<temp.w){
                continue;
            }
            if(dis[j.i]>dis[temp.i]+j.w)
            {
                dis[j.i]=dis[temp.i]+j.w;
                hp.push({j.i,dis[j.i],j.t});
            }
        }
    }
    printf("%d\n",dis[y]);
    return 0;
}
/*

4 4
0 3
1 3 -10 10
0 1 5
0 3 10
1 3 3
2 3 5


*/
