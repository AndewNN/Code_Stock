/*
    TASK: Intro01
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<stdio.h>
int a,b,c,d[100020],e,f,g;
int main()
{
scanf("%d",&b);
for(c=1;c<=b;c++){
    scanf("%d",&a);
    d[c] = d[c-1]+a;
}
scanf("%d",&e);
while(e--){
    scanf("%d %d",&f,&g);
    printf("%d",d[g]-d[f-1]);
}
    return 0;
}
