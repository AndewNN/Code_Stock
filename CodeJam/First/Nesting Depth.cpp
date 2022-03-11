/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
char c[110],o;
int a[110];
int main()
{
    int q,len,i,state,k;
    scanf("%d",&q);
    for(k=1;k<=q;k++)
    {
        state=0;
        scanf(" %s",c);
        printf("Case #%d: ",k);
        len=strlen(c);
        for(i=0; i<len; i++)
            a[i]=c[i]-'0';
        for(i=0; i<len; i++)
        {
            while(state<a[i])
            {
                printf("(");
                state++;
            }
            while(state>a[i])
            {
                printf(")");
                state--;
            }
            printf("%d",a[i]);
        }
        while(state>0)
        {
            printf(")");
            state--;
        }
        printf("\n");
    }



    return 0;
}
