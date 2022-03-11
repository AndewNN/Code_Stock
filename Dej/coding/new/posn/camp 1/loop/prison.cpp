/*
    TASK: Intro01
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<stdio.h>
int main()
{
int A,B,C,d=0;
scanf("%d %d %d",&A,&B,&C);
for(int a=1;a<=100;a++){
    for(int b=-100;b<=100;b++){
        for(int c=1;c<=100;c++){
            for(int d=-100;d<=100;d++){
                if((a*c ==A)&&(b*d==C)&&((a*d)+(b*c)==B)){
                    printf("%d %d %d %d",a,b,c,d);
                    return 0;
                }
            }
        }
    }
}
printf("No Solution");
}
