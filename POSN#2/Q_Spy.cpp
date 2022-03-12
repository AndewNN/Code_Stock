/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
long long p[1010],a[1010][1010];
long long fr(int i)
{
    if(p[i]==i)
        return i;
    return p[i]=fr(p[i]);
}
struct A
{
    long long a,b,w;
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
    long long n,m,i,j,x,y,z,cou=0;
    scanf("%lld",&n);
    for(i=1; i<=n; i++)
        p[i]=i;
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++)
        {
            scanf("%lld",&x);
            if(i<j)
                s.push({i,j,x});
        }
    }
    for(i=1; i<=n; i++)
    {
        scanf("%lld",&m);
        s.push({0,i,m});
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
    printf("%lld\n",cou);

    return 0;
}
/*

5
0 3 12 15 11
3 0 14 3 20
12 14 0 11 7
15 3 11 0 15
11 20 7 15 0
5 10 10 10 10

*/
