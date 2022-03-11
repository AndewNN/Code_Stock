/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a == 0) printf("%.2lf\n",sqrt(c*c-b*b));
    if(b == 0) printf("%.2lf\n",sqrt(c*c-a*a));
    if(c == 0) printf("%.2lf\n",sqrt(a*a+b*b));
    return 0;
}
