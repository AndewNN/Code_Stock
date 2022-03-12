/*
    TASK: Intro01
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<stdio.h>
#include<string.h>
char turn(char a){
printf("R");
if(a=='N') return 'E';
if(a=='E') return 'S';
if(a=='S') return 'W';
if(a=='W') return 'N';
}
char A[1200];
int main()
{
int len,c;
char tid='N';
scanf(" %s",A);
len = strlen(A);
for(int i=0;i<len;i++){
        if(A[i]=='N'){
            while(tid!='N')   tid=turn(tid);
            printf("F");
        }
        if(A[i]=='S'){
            while(tid!='S')   tid=turn(tid);
            printf("F");
        }
        if(A[i]=='E'){
            while(tid!='E')   tid=turn(tid);
            printf("F");
        }
        if(A[i]=='W'){
            while(tid!='W')   tid=turn(tid);
            printf("F");
        }
        if(A[i]=='Z'){
            tid = 'N';
            printf("Z");
        }
}
    return 0;
}
