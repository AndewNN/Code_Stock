/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int p[100100],s[100100];
int fr(int i)
{
    if(p[i]==i)
        return i;
    return p[i]=fr(p[i]);
}
int main()
{
    int n,m,i,a,b;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    {
        p[i]=i;
        scanf("%d",&s[i]);
    }
    while(m--)
    {
        scanf("%d %d",&a,&b);
        if(s[fr(a)] > s[fr(b)] || ((s[fr(a)] == s[fr(b)]) && fr(a) < fr(b))) // a win
        {
            s[fr(a)]+=s[fr(b)]/2;
            p[fr(b)]=fr(a);
            printf("%d\n",fr(a));
        }
        else if(s[fr(a)] < s[fr(b)] || ((s[fr(a)] == s[fr(b)]) && fr(a) > fr(b))) // a win
        {
            s[fr(b)]+=s[fr(a)]/2;
            p[fr(a)]=fr(b);
            printf("%d\n",fr(b));
        }
        else if(fr(a)==fr(b))
        {
            printf("-1\n");
        }
    }
    return 0;
}
