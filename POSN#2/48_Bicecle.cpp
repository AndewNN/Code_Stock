/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int p[50100];
struct A
{
    int a,b,w;
    bool operator<(const A&o)const
    {
        if(w!=o.w)
            return w<o.w;
    }
};
priority_queue<A> st;
A temp;
int fr(int i)
{
    if(p[i]==i)
        return i;
    return p[i]=fr(p[i]);
}
int main()
{
    int q,n,m,i,sum=0,now,a,b,w;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d %d",&n,&m);
        while(n--)
        {
            scanf("%d",&now);
            p[now]=now;
        }
        while(m--)
        {
            scanf("%d %d %d",&a,&b,&w);
            st.push({a,b,w});
        }
        while(!st.empty())
        {
            temp = st.top();
            st.pop();
            if(fr(temp.a)==fr(temp.b))
            {
                sum+=temp.w;
                continue;
            }
            p[fr(temp.a)]=fr(temp.b);
        }
        printf("%d\n",sum);
        sum=0;
    }

    return 0;
}
/*

2
8 10
1 2 3 4 5 6 7 8
1 2 3
1 5 5
2 3 4
2 6 3
3 4 2
3 7 5
4 8 5
5 6 2
6 7 7
7 8 3

*/
