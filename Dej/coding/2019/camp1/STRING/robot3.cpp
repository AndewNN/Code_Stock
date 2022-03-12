/*
    TASK:gdr
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char a[110];
int c[4];
int main()
{
    int k,len,i,x=0,y=0,c1=1,c2=1;
    scanf(" %s %d",a,&k);
    len = strlen(a);
    for(i=0;i<len;i++){
        if(a[i]=='N'){
            x++;
            c[0]++;
        }else if(a[i]=='E'){
            y++;
            c[1]++;
        }else if(a[i]=='S'){
            x--;
            c[2]++;
        }else if(a[i]=='W'){
            y--;
            c[3]++;
        }
    }
    if(c[0]>=c[2]){
        if(k>=c[2]){
            x+=c[2];
            k-=c[2];
        }else{
            x+=k;
            k=0;
        }
    }else{
        if(k>=c[0]){
            x-=c[0];
            k-=c[0];
        }else{
            x-=k;
            k=0;
        }
        c1=0;
    }
    if(c[1]>=c[3]){
        if(k>=c[3]){
            y+=c[3];
            k-=c[3];
        }else{
            y+=k;
            k=0;
        }
    }else{
        if(k>=c[1]){
            y-=c[1];
            k-=c[1];
        }else{
            y-=k;
            k=0;
        }
        c2=0;
    }
    if(c1){
        if(k>=c[0]){
            x-=c[0];
            k-=c[0];
        }else{
            x-=k;
            k=0;
        }
    }else{
        if(k>=c[2]){
            x+=c[2];
            k-=c[2];
        }else{
            x+=k;
            k=0;
        }
    }
    if(c2){
        if(k>=c[1]){
            y-=c[1];
            k-=c[1];
        }else{
            y-=k;
            k=0;
        }
    }else{
        if(k>=c[3]){
            y+=c[3];
            k-=c[3];
        }else{
            y+=k;
            k=0;
        }
    }
    printf("%d",2*(abs(x)+abs(y)));
    return 0;
}
