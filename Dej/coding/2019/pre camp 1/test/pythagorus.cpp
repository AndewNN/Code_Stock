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
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a==0.00){
        printf("%.2lf",sqrt(c*c-b*b));
    }else if(b==0.00){
        printf("%.2lf",sqrt(c*c-a*a));
    }else{
        printf("%.2lf",sqrt(b*b+a*a));
    }
    return 0;
}
