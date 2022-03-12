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
    int i;
    bool operator<(const A&o)const
    {
        return i < o.i;
    }
};
struct B
{
    int i;
    bool operator<(const B&o)const
    {
        return i > o.i;
    }
};
priority_queue<A> h1;
priority_queue<B> h2;
A t;
B tt;
int main()
{
    int n,now,m;
    scanf("%d",&n);
    scanf("%d",&m);
    n--;
    h1.push({m});
    printf("%d.00\n",m);
    while(n--)
    {
        scanf("%d",&m);
        if(!h2.empty() && m<h2.top().i)
            h1.push({m});
        else
            h2.push({m});
        if(int(h1.size())-int(h2.size())>=2)
        {
            t=h1.top();
            h1.pop();
            h2.push({t.i});
        }
        if(int(h2.size())-int(h1.size())>=2)
        {
            tt=h2.top();
            h2.pop();
            h1.push({tt.i});
        }
        if(h1.size()==h2.size())
            printf("%.2f\n",(double(h1.top().i)+double(h2.top().i))/2);
        if(h1.size()>h2.size())
            printf("%.2f\n",double(h1.top().i));
        if(h1.size()<h2.size())
            printf("%.2f\n",double(h2.top().i));
    }
    return 0;
}
