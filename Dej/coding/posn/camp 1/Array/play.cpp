/*
    TASK: Intro01
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<stdio.h>
int main()
{
int a=2,b=3,*t;
int *c,*d;
printf("%d %d",a,b);
printf("\n");
c = &a;
d = &b;
t = c;
c = d;
c = t;
a = *c;
b = *d;
printf("%d %d",a,b);
    return 0;
}
