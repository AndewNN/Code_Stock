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
    int n,m,i,a,b,q;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
        p[i]=i;
    for(i=0;i<m;i++)
    {
        scanf("%d %d",&a,&b);
        p[findroot(a)]=findroot(b);
    }
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d %d",&a,&b);
        if(findroot(a)==findroot(b))
            printf("YES\n");
        else
            printf("NO\n");
    }



    return 0;
}
