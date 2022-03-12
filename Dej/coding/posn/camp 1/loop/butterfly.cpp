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
for(int i=1;i<=2*a-1;i++){
        if(i<a){
        for(int c=1;c<=i;c++){
            printf("*");
        }
        for(int b=a-1;b>=i;b--){
            printf("-");
        }
        for(int e=a-2;e>=i;e--){
            printf("-");
        }
        for(int d=1;d<=i;d++){
            printf("*");
        }
        }
        if(i==a){
        for(int f=1;f<=2*a-1;f++){
            printf("*");
        }
        }else if(i>a){
        for(int b=a-1;b>=i-a;b--){
            printf("*");
        }
        for(int c=1;c<=i-a;c++){
            printf("-");
        }
        for(int d=1;d<=i-1-a;d++){
            printf("-");
        }
        for(int e=a-1;e>=i-a;e--){
            printf("*");
        }
        }
            printf("\n");
}
    return 0;
}
