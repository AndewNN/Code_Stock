#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    x %=360;
    if (x==0 || x==180)
        printf("x-axis");
    else if (x==90 || x==270)
        printf("y-axis");
    else
        printf("%d",x/90+1);


}
