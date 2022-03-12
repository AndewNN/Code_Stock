/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
char b[23];
int main()
{
    int i,j,n,ma;
    char o;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf(" %s",b);
        for(j=0,ma=0;j<strlen(b);j++)
        {
            o=b[j];
            if(o=='P')
                ma=max(ma,1);
            if(o=='-')
                ma=max(ma,2);
            if(o=='T')
                ma=max(ma,3);
            if(o=='X')
                ma=max(ma,4);
        }
        if(ma==1)
            printf("Case #%d: Yes\n",i);
        if(ma==2)
            printf("Case #%d: No - Wrong answer\n",i);
        if(ma==3)
            printf("Case #%d: No - Time limit exceeded\n",i);
        if(ma==4)
            printf("Case #%d: No - Runtime error\n",i);
    }

}
