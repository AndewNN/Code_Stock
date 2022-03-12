/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int p[100100];
int fr(int i)
{
    if(p[i]==i)
        return i;
    return p[i]=fr(p[i]);
}
int main()
{
    int n,m,i,a,b;
    char o;
    scanf("%d %d",&n,&m);
    for(i=1; i<=n; i++)
        p[i]=i;
    while(m--)
    {
        scanf(" %c",&o);
        scanf("%d %d",&a,&b);
        if(o=='c')
        {
            p[fr(a)]=fr(b);
        }
        if(o=='q')
        {
            if(fr(a)==fr(b))
                printf("yes\n");
            else
                printf("no\n");
        }
    }
    return 0;
}
