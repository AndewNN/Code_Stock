/*
    TASK: Intro01
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<stdio.h>
int B[10];
int main()
{
int a,b,c,d,e,f,g,h,i=0;
for(int z=0;z<5;z++){
    scanf("%d",&B[z]);
    if(B[z]==10000){
        printf("N");
    }else{
    c = B[z];
    b = c%1000;
    c = c-b;
    e = c/1000;
    c = b%100;
    b = b-c;
    f = b/100;
    b = c%10;
    c = c-b;
    g = c/10;
    if((B[z]==e+(f*f)+(g*g*g)+(b*b*b*b)) && B[z]>=1000){
        printf("Y");
    }else if((B[z]==f+(g*g)+(b*b*b)) && B[z]>=100 && B[z]<1000){
        printf("Y");
    }else if((B[z]==g+(b*b)) && (B[z]>=10) && B[z]<100){
        printf("Y");
    }else if(B[z]>=1 && B[z]<10){
        printf("Y");
    }
    else{
    printf("N");
    }
    }
}
    return 0;
}
