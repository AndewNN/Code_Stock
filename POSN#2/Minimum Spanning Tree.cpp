/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int p[1010];
int fr(int i)
{
    if(p[i]==i)
        return i;
    return p[i]=fr(p[i]);
    }
struct A
{
    int a,b;
    double w;
    bool operator<(const A&o)const
    {
        if(w!=o.w)
            return w > o.w;
    }
};
priority_queue<A> s;
A t;
int main()
{
    int n,m,i,x,y;
    double cou=0,z;
    scanf("%d %d",&n,&m);
    for(i=0; i<n; i++)
        p[i]=i;
    while(m--)
    {
        scanf("%d %d %lf",&x,&y,&z);
        s.push({x,y,z});
    }
    while(!s.empty())
    {
        t=s.top();
        s.pop();
        if(fr(t.a)==fr(t.b))
            continue;
        p[fr(t.a)]=fr(t.b);
        cou+=t.w;
    }
    printf("%.3lf",cou);
    return 0;
}
/*

4 4
0 1 1
1 2 1
2 3 1
3 0 2

*/
