/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<stdio.h>
#include<math.h>
int main()
{
    double x,y,x1,y1,x2,y2,a,b,c,s,k;
    scanf("%lf %lf %lf %lf %lf %lf %lf",&x,&y,&x1,&y1,&x2,&y2,&k);
    a = sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
    b = sqrt((x-x2)*(x-x2)+(y-y2)*(y-y2));
    c = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    s = (a+b+c)/2;
    printf("%.2lf\n%.2lf",sqrt(s*(s-a)*(s-b)*(s-c)),(a+b+c)*k+(M_PI * k * k));
    return 0;
}
