#include<stdio.h>
int main()
{
    int a = -3;
    /*
    if(a>5)
        a *= 10;
    else if(a>0)
        a /= 2;
    else
        a += 20;
        */
    a = ((a>5)? a*10 : (a>0)? a/2 : a+20);
    printf("%d",a);

}
