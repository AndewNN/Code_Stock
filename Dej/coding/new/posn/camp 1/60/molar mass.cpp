/*
TASK: Infix to Postfix
LANG: C
AUTHOR: PeaTT~
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int st[20000];
char a[100];
int main()
{
    int len,i,n,top=-1,b,ans=0,j,h=0;
    scanf("%d\n",&n);
    ans =0;
    for(i=0; i<n; i++)
    {
        h = 0;
        top=0;
        ans = 0;
        scanf(" %s",a);
        len = strlen(a);
        for(j=0; j<len; j++)
        {
            if(a[j]=='H')
            {
                top++;
                st[top]=1;
            }
            else if(a[j]=='C')
            {
                top++;
                st[top]=12;
            }
            else if(a[j]=='O')
            {
                top++;
                st[top]=16;
            }
            else if(a[j]=='(')
            {
                top++;
                st[top]=-1;
            }
            else if(a[j]==')')
            {
                while(1)
                {
                    if(st[top]==-1)
                    {
                        //top--;
                        break;
                    }
                    else
                    {

                        h += st[top];
                        top--;
                    }
                    //printf("%d ",h);
                }
                st[top] = h;
                h=0;
            }
            else
            {
                b = a[j]-48;
                //printf("%d\n",st[top]);
                st[top]=st[top]*b;
            }

        }
        while(top>=0)
        {
            ans += st[top];
            top--;
        }
        printf("%d\n",ans);
    }
    return 0;
}
