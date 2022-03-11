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
    int i,w;
    bool operator < (const A&o) const
    {
            return w>o.w;
    }
};
priority_queue<A> hp;
A temp;
vector<A> g[110];
int dis[110];
using namespace std;
int main()
{
    int n,i,w,aa,bb,mi=1<<30,m;
    char a,b;
    scanf("%d",&n);
    for(i=0;i<60;i++)
        dis[i]=1<<30;
    while(n--)
    {
        scanf(" %c %c %d",&a,&b,&w);
        if(a<'a'||a>'z')aa=a-'A'+26;
        else            aa=a-'a';
        if(b<'a'||b>'z')bb=b-'A'+26;
        else            bb=b-'a';
        g[aa].push_back({bb,w});
        g[bb].push_back({aa,w});
    }
    hp.push({51,0});
    dis[51]=0;
    while(!hp.empty())
    {
        temp = hp.top();
        hp.pop();
        for(auto x : g[temp.i])
        {
            if(dis[x.i]>dis[temp.i]+x.w){
                dis[x.i]=dis[temp.i]+x.w;
                hp.push({x.i,dis[x.i]});
            }
        }
    }
    for(i=26;i<51;i++)
        if(dis[i]<mi)
        {
            mi=dis[i];
            m=i;
        }
    printf("%c %d\n",m+'A'-26,mi);

    return 0;
}
/*

5
A d 6
B d 3
C e 9
d Z 8
e Z 3

*/
