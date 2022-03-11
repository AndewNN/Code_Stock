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
    int p,d;
    bool operator < (const A&o) const{
        if(p != o.p)
            return p > o.p;
        else
            return d < o.d;
    }
};
priority_queue<A> hp;
A t;
int main()
{
    int n,k,i,now;
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&now);
        if(!hp.empty())
            t=hp.top();
        while(i-t.d>k)
        {
            hp.pop();
        if(!hp.empty())
            t=hp.top();
        }
        hp.push({t.p+now,i});
        if(i==n)
            printf("%d",t.p+now);

    }
    return 0;
}
