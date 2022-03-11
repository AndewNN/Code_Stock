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
    int s,f,i;
    bool operator<(const A&o)const
    {
        return s > o.s;
    }
};
struct B
{
    int f,i;
    bool operator<(const A&o)const
    {
        return f > f.s;
    }
};
priority_queue<A> hps;
priority_queue<B> hpf;
A ts;
B tf;
int mk[500100];
int main()
{
    int n,k,m,i,s,f,l=0,state=0,t;
    scanf("%d %d %d",&n,&k,&m);
    for(i=1; i<=n; i++)
    {
        scanf("%d %d",&s,&f);
        hps.push({s,f,i});
    }
    while(!hps.empty())
    {
        ts=hps.top();
        t=ts.s;
        hps.pop();
        while(!hpf.empty()hpf.top().f<t)
        {
            hpf.pop();
            state--;
        }
        if(l>=t)
        {
            if(state+1>k)
                continue;
            state++;
            mk[ts.i]=1;
            printf("y");
            l=ts.f;
        }
        mk[ts.i]=1;
        printf("y");
        l=ts.f;
    }


    return 0;
}
/*

6 1 4
3 7 2 4 1 3 7 8 8 10 9 15
3 5 4 1

*/
