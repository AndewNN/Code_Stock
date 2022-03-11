/*
    TASK: Intro01
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<stdio.h>
int main()
{
int a,b;
scanf("%d %d",&a,&b);
for(int c=b;c>=a;c--){
    if((c%4==0)&&(c%100!=0)){
        printf("%d\n",c);
    }else if(c%400==0){
            printf("%d\n",c);
    }
}
    return 0;
}
