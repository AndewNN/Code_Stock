#include<stdio.h>
int main()
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if (a==0)
        printf("%.2lf",pow((c*c-b*b),0.5));
    if (b==0)
        printf("%.2lf",pow((c*c-a*a),0.5));
    if (c==0)
        printf("%.2lf",pow((a*a+b*b),0.5));
    }
