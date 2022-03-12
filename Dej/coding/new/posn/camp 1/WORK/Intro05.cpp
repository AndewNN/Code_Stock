/*
    TASK: Intro05
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<stdio.h>
#include<math.h>
int main()
{
 double a,b,c,d,e,f,k,along,blong,clong,s,di,dj,x,y,z,j,cl;
 scanf("%lf %lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f,&k);
along = sqrt(pow(a-c,2)+pow(b-d,2));
blong = sqrt(pow(c-e,2)+pow(d-f,2));
clong = sqrt(pow(e-a,2)+pow(f-b,2));
s = (along+blong+clong)/2;
di = sqrt(s*(s-along)*(s-blong)*(s-clong));
x = k*(along+blong+clong);
cl = M_PI*k*k;
printf("%.2lf\n",di);
printf("%.2lf",cl+x);
    return 0;
}
