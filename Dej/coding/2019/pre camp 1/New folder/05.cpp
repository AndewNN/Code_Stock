/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double i,j,i1,j1,i2,j2,k,a,b,c,a1,b1,c1,s1,s2,ar1,ar2;
    scanf("%lf %lf %lf %lf %lf %lf %lf",&i,&j,&i1,&j1,&i2,&j2,&k);
    a = sqrt(pow(i-i1,2)+pow(j-j1,2));
    b = sqrt(pow(i1-i2,2)+pow(j1-j2,2));
    c = sqrt(pow(i-i2,2)+pow(j-j2,2));
    s1 = (a+b+c)/2;
    ar1 = sqrt(s1*(s1-a)*(s1-b)*(s1-c));
    printf("%.2lf %.2lf\n",ar1,(a*k)+(b*k)+(c*k)+(M_PI*k*k));
    return 0;
}
