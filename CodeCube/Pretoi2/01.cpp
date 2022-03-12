/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int p[200100];
int fr(int a)
{
    if(p[a] == a)
        return a;
    else
        return p[a] = fr(p[a]);
}
int main()
{
    int i,j,s,e,a,b,q,n;
    scanf("%d %d",&n,&q);
    for(i=1; i<=n; i++)
        p[i] = i;
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a);
        p[fr(i)] = fr(a);
    }
    while(q--)
    {
        scanf("%d %d %d %d",&s,&e,&a,&b);
        a = p[a],b = p[b],s = p[s],e = p[e];
        if(s == a || s == b)
        {
            if(e == a || e == b)
                printf("DEAD\n");
            else
                printf("SURVIVE\n");
        }
        else if(s != a && s != b)
        {
            if(e == s)
                printf("DEAD\n");
            else
                printf("SURVIVE\n");
        }
    }
    return 0;
}
