/*
    TASK: Intro01
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<stdio.h>
int main()
{
int a;
scanf("%d",&a);
a =a%360;
if((a>=0 && a<=15) || (a>345 && a<=360)){
    printf("6");
}else if(a>15 && a<=45){
printf("7");
}else if(a>45 && a<=75){
printf("8");
}else if(a>75 && a<=105){
printf("9");
}else if(a>105 && a<=135){
printf("10");
}else if(a>135 && a<=165){
printf("11");
}else if(a>165 && a<195){
printf("12");
}else if(a>=195 && a<=225){
printf("1");
}else if(a>225 && a<=255){
printf("2");
}else if(a>255 && a<=285){
printf("3");
}else if(a>285 && a<=315){
printf("4");
}else if(a>315 && a<=345){
printf("5");
}
    return 0;
}
