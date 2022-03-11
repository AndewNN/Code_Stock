/*
    TASK: Intro01
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<stdio.h>
#include<string.h>
char A[120];
int main()
{
    int len,x=0,y=0;
scanf(" %s",A);
len = strlen(A);
for(int i=0;i<len;i++){
    if(A[i]=='N'){
        y +=1;
    }else if(A[i]=='S'){
        y -=1;
    }else if(A[i]=='E'){
        x +=1;
    }else if(A[i]=='W'){
        x -=1;
    }else if(A[i]=='Z'){
        y =0;
        x =0;
    }
}
printf("%d %d",x,y);
    return 0;
}
