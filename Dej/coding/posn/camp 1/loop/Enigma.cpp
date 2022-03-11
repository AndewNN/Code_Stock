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
        for(int b=a-1;b>=i;b--){
            printf("+");
        }
        for(int c=1;c<=i;c++){
            printf("0");
        }
        for(int d=1;d<=i-1;d++){
            printf("0");
        }
        for(int e=a-1;e>=i;e--){
            printf("+");
        }
        }
        if(i==a){
        for(int f=1;f<=2*a-1;f++){
            printf("0");
        }
        }else if(i>a){
        for(int c=1;c<=i-a;c++){
            printf("+");
        }
        for(int b=a-1;b>=i-a;b--){
            printf("0");
        }
        for(int e=a-2;e>=i-a;e--){
            printf("0");
        }
        for(int d=1;d<=i-a;d++){
            printf("+");
        }
        }
            printf("\n");
}
    return 0;
}
