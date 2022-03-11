/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
char c[110],a[110],b[110],t[110];
int main()
{
    int n,l,i,q,x,la,lb,ch;
    scanf("%d",&q);
    scanf(" %s",c);
    for(i=0;i<strlen(c);i++)
        if(c[i]=='*')
            x=i;
    la=x;
    lb=strlen(c)-x-1;
    for(i=0;i<=la;i++)
        a[i]=c[i];
    for(i=0;i<=lb;i++)
        b[i]=c[i+x+1];
    while(q--){
        ch=1;
        scanf(" %s",t);
        l=strlen(t);
        if(la+lb>l){
            printf("No\n");
            continue;
        }
        for(i=0;i<la;i++){
          //  printf("a %c %c\n",a[i],t[i]);
            if(a[i]!=t[i])
                ch=0;
        }
        for(i=0;i<lb;i++){
          //  printf("b %c %c\n",b[i],t[l+i-lb]);
            if(b[i]!=t[l+i-lb])
                ch=0;
        }
        if(ch)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
/*

5
pe*at
peat
peatt
mrpeatt
peatty
pot

1
p*tt
prpeatt

*/
