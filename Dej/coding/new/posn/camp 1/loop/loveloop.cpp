/*
    TASK: Intro01
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<stdio.h>
int main()
{
int a,e;
scanf("%d",&a);
for(int b=1;b<=a*2;b++){
    if(b<=a){
    for(int c=b;c<a+b;c++){
        printf("%d ",c);
    }
    }else{
    for(int c=b;c<a+b;c++){
        e =c;
        e = e%a;
    if(e == 0){
        e = a;
    }
        printf("%d ",e);
    }

    }
    printf("\n");
}
    return 0;
}
