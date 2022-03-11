/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int p[100100];
int findroot(int i)
{
    if(p[i]==i)
        return i;
    return p[i] = findroot(p[i]);
}
int main()
{
    int n,q,x,y,i;
    char opr;
    scanf("%d %d",&n,&q);
    for(i=1;i<=n;i++)
        p[i]=i;
    while(q--)
    {
        scanf(" %c %d %d",&opr,&x,&y);
        if(opr=='c')
        {
            p[findroot(x)]=findroot(y);
        }
        else
            printf((findroot(x)==findroot(y))?"yes\n":"no\n");
    }


    return 0;
}
