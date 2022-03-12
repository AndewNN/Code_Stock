/*
    TASK:
    LANG: CPP
    AUTHOR: Andre
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int t[3010],l[3010],s[3010],ma[3010][3010],ch[3010];
char a[3010][3010];
int main()
{
    int n,m,i,j,mi=1000000;
    scanf("%d %d",&n,&m);
    for(i=0; i<n; i++)
    {
        scanf(" %s",a[i]);
    }
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
        {
            if(a[i][j]=='X')
                t[j]=i;
            if(a[i][j]=='#')
            {
                if(!ch[j])
                {
                    l[j]=i;
                    ch[j]=1;
                }
            }
        }
    for(i=0; i<m; i++)
        s[i]=l[i]-t[i]-1;
    for(i=0; i<m; i++)
        mi=min(mi,s[i]);
    for(i=n-1; i>=0; i--)
        for(j=m-1; j>=0; j--)
        {
            if(a[i][j]=='X')
            {
                swap(a[i][j],a[i+mi][j]);
                ma[i+mi][j]=1;
            }
        }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%c",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/*

5 6
.XXXX.
...X..
......
#..###
######

*/
