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
    int a,b,i;
    bool operator < (const A&o)const
    {
        if(a!=o.a)
            return a<o.a;
        return b>o.b;
    }
};
struct B
{
    int a,b,i;
    bool operator < (const B&o)const
    {
        if(a!=o.a)
            return a>o.a;
        return b>o.b;
    }
};
priority_queue<A> aa;
priority_queue<B> bb;
int main()
{
    int n,i,a,b,ma=0,mb=0,cou=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d",&a,&b);
        aa.push({a,b});
    }
    while(!aa.empty())
    {
        if(ma>aa.top().a && mb>aa.top().b)
        {
            aa.pop();
            continue;
        }
        ma=aa.top().a , mb=aa.top().b;
        bb.push({ma,mb});
        aa.pop();
    }
    while(!bb.empty()){
        printf("%d %d\n",bb.top().a,bb.top().b);
        bb.pop();
    }
    return 0;
}
/*

3
2 4
3 5
1 6

5
9 1
8 2
7 3
6 4
5 5

*/
