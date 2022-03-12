/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int p[300100],s[300100],m[300100];
int fr(int i)
{
    if(p[i]==i)
        return i;
    return p[i]=fr(p[i]);
}
int main()
{
    int n,l,i,x,y;
    scanf("%d %d",&n,&l);
    for(i=1; i<=l; i++)
        p[i]=i,s[i]=1;
    while(n--)
    {
        scanf("%d %d",&x,&y);
        if(fr(x)==fr(y))
        {
            if(s[fr(x)]>=m[fr(x)]+1)
            {
                m[fr(x)]++;
                printf("yes\n");
                continue;
            }
            printf("no\n");
        }
        if(fr(x)!=fr(y))
        {
            if(s[fr(x)]+s[fr(y)]>=m[fr(x)]+m[fr(y)]+1)
            {
                s[fr(x)]+=s[fr(y)];
                m[fr(x)]+=m[fr(y)]+1;
                p[fr(y)]=fr(x);
                printf("yes\n");
                continue;
            }
            printf("no\n");
        }


    }
    return 0;
}
