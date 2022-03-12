/*
    TASK: Intro03
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<stdio.h>
#include<math.h>
int main()
{
double d,e;
scanf("%lf %lf",&d,&e);
printf("Plus: %.2lf\n",d+e);
printf("Minus: %.2lf\n",d-e);
printf("Multiply: %.2lf\n",d*e);
printf("Divide: %.2lf\n",d/e);
printf("Modulo: %.2lf\n",fmod(d,e));
printf("Power: %.2lf\n",pow(d,e));
printf("Root: %.2lf\n",pow(d,1/e));
    return 0;
}
