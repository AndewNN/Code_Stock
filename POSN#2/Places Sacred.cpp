/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
long long p[200100];
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
            return w < o.w;
    }

};
priority_queue<A> s;
A t;
int main()
{
    long long n,m,i,x,y,z,cou=0;
    scanf("%lld %lld",&n,&m);
    for(i=1;i<=n;i++)
        p[i]=i;
    while(m--)
    {
        scanf("%lld %lld %lld",&x,&y,&z);
        s.push({x,y,z-1});
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

6 9
1 2 8
2 3 6
1 4 6
4 2 6
4 5 8
2 5 7
5 6 5
2 6 9
3 6 5

*/
