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
    long long mp,t,h,d,rk,tod;
    bool operator<(const A&o)const
    {
        if(mp!=o.mp)
            return mp < o.mp;
        else
            return rk > o.rk;
    }
};
priority_queue<A> hp;
A now;
int main()
{
    long long q,i,m,h,state=0,j,cou=0;
    char o;
    scanf("%lld",&q);
    for(i=1; i<=q; i++)
    {
        scanf(" %c",&o);
        if(o=='c')
        {
            state++;
            scanf(" %c",&o);
            if(o=='n')
            {
                scanf("%lld",&m);
                hp.push({m,1,200000,i,state,0});
            }
            if(o=='r')
            {
                scanf("%lld %lld",&m,&h);
                hp.push({m,2,h,i,state,0});
            }
        }
        else if(o=='u' && !hp.empty())
        {
            while(!hp.empty() && hp.top().t==2 && i - hp.top().d + hp.top().tod >= hp.top().h)
            {
                m=hp.top().mp;
                for(j=0; j<(i - hp.top().d + hp.top().tod)/hp.top().h; j++)
                    m/=2;
                int tt=(i - hp.top().d + hp.top().tod)%hp.top().h;
                if(m==0)
                    hp.pop();
                else if(!hp.empty())
                {
                    now=hp.top();
                    hp.pop();
                    hp.push({m,2,now.h,i,now.rk,tt});
                }
            }
            if(!hp.empty())
            {
                now=hp.top();
                hp.pop();
                cou+=now.mp;
            }
        }
    }
    printf("%lld\n",cou);
    i--;
    while(!hp.empty() && hp.top().t==2 && i - hp.top().d + hp.top().tod >= hp.top().h)
    {
        m=hp.top().mp;
        for(j=0; j<(i - hp.top().d + hp.top().tod)/hp.top().h; j++)
            m/=2;
        if(m==0)
            hp.pop();
        else if(!hp.empty())
        {
            now=hp.top();
            hp.pop();
            hp.push({m,2,now.h,i,now.rk});
        }
    }

    cou=0;
    while(!hp.empty())
    {
        while(!hp.empty() && hp.top().t==2 && i - hp.top().d + hp.top().tod >= hp.top().h)
        {
            m=hp.top().mp;
            for(j=0; j<(i - hp.top().d + hp.top().tod)/hp.top().h; j++)
                m/=2;
            if(m==0)
                hp.pop();
            else if(!hp.empty())
            {
                now=hp.top();
                hp.pop();
                hp.push({m,2,now.h,i,now.rk});
            }
        }
        if(!hp.empty())
        {
            hp.pop();
            cou++;
        }
    }
    printf("%lld\n",cou);
    return 0;
}
/*

5
c n 100
c r 1 2
u
u
c r 1 1

5
c n 100
c r 1 2
u
u
c n 1

*/
