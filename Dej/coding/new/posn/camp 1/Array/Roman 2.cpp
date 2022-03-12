/*
    TASK: Intro01
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<stdio.h>
#include<string.h>
char B[5000];
int main()
{
int a,len,sum=0;
scanf("%d",&a);
for(int b=0;b<a;b++){
    scanf(" %s",B);
    len = strlen(B);
    for(int c=0;c<len;c++){
        if(B[c]=='M'){
            sum+=1000;
        }else if(B[c]=='C' && B[c+1]=='M'){
        sum+=900;
        c++;
        }else if(B[c]=='D'){
        sum+=500;
        }else if(B[c]=='C' && B[c+1]=='D'){
        sum+=400;
        c++;
        }else if(B[c]=='C'){
        sum+=100;
        }else if(B[c]=='X' && B[c+1]=='C'){
        sum+=90;
        c++;
        }else if(B[c]=='L'){
        sum+=50;
        }else if(B[c]=='X' && B[c+1]=='L'){
        sum+=40;
        c++;
        }else if(B[c]=='X'){
        sum+=10;
        }else if(B[c]=='I' && B[c+1]=='X'){
        sum+=9;
        c++;
        }else if(B[c]=='V'){
        sum+=5;
        }else if(B[c]=='I' && B[c+1]=='V'){
        sum+=4;
        c++;
        }else if(B[c]=='I'){
        sum+=1;
        }
    }
            printf("%d\n",sum);
            sum =0;
}
    return 0;
}
