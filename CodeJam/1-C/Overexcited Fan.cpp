/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
char a[1010];
int main()
{
    int q,x,y,i,len,ch;
    char o;
    scanf("%d",&q);
    for(int k=1; k<=q; k++)
    {
        ch=0;
        scanf("%d %d %s",&x,&y,a);
        len=strlen(a);
        for(i=1; i<=len; i++)
        {
            if(a[i-1]=='S')
                y--;
            if(a[i-1]=='N')
                y++;
            if(a[i-1]=='E')
                x++;
            if(a[i-1]=='W')
                x--;
            if(abs(x)+abs(y)<=i)
            {
                ch=1;
                printf("Case #%d: %d\n",k,i);
                break;
            }
        }
        if(ch==0)
            printf("Case #%d: IMPOSSIBLE\n",k);

    }


    return 0;
}
