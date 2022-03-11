/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int ans[2010];
char b[2010],aa[2010];
int main()
{
    int i,j,x,y,n,c=0,now=0,len,state;
    scanf("%d %s",&n,b);
    if(n==1)
    {
        printf("%s",b);
        return 0;
    }
    c=n,state=0;
    while(c<=strlen(b))
    {
        for(i=0;i<n&&c<=strlen(b);i++)
            ans[state++]=c++;
        c+=3*n-4;
    }
    for(i=1;i<=n-2;i++)
    {
        for(c=n-i;c<=strlen(b);)
        {
            ans[state++]=c;
            c+=n+(i-1)*2+1;
            if(c>strlen(b))
                break;
            ans[state++]=c;
            c+=n+(n-i-2)*2+1;
        }
    }
    ans[state++]=1;
    c=2;
    while(c<=strlen(b))
    {
        c+=3*n-4;
        for(i=0;i<n&&c<=strlen(b);i++)
            ans[state++]=c++;

    }

    for(i=0;i<=state;i++)
        aa[ans[i]]=b[i];
    for(i=1;i<=state;i++)
        printf("%c",aa[i]);
    return 0;
}
/*
asdfghjklpasdfghjklpasdfghjk

3
RNIONVMGDE
*/
