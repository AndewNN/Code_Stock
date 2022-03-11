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
};
struct B
{
    int a,b,w;
    bool operator<(const A&o)const
    {
        if(w!=o.w)
            return w>o.w;
    }
};
A x[100100],y[100100],z[100100];
priority_queue<B> st;
int main()
{
    int n,i,a,b,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        x[i]={n,b};
        x[i]={n,b};
        x[i]={n,b};
    }
    for(i=0;i<n)
    {

    }

    return 0;
}

