/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<stdio.h>
using namespace std;
int main()
{
    int a;
    scanf("%d",&a);
    a = ((a%360)+360)%360;
    if(a == 0 || a == 180){
        printf("x-axis");
    }else if(a == 90 || a == 270){
        printf("y-axis");
    }else if(a>270){
        printf("4");
    }else if(a>180){
        printf("3");
    }else if(a>90){
        printf("2");
    }else if(a>0){
        printf("1");
    }
    return 0;
}
