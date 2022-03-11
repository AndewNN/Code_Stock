/*
    TASK: Intro01
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<stdio.h>
char A[1200][1200];
int x=0,y=0,m=0,c=0,i,j;
void play(int i,int j){
    A[i][j] ='.';
if(i+1<y && A[i+1][j] == '*'){
    A[i+1][j] = '.';
    play(i+1,j);
}
if(i-1>=0 && A[i-1][j] == '*'){
    A[i-1][j] = '.';
    play(i-1,j);
}
if(j+1<x && A[i][j+1] == '*'){
    A[i][j+1] = '.';
    play(i,j+1);
}
if(j-1>=0 && A[i][j-1] == '*'){
    A[i][j-1] = '.';
    play(i,j-1);
}
if(i+1==y && A[0][j] == '*'){
    A[0][j] = '.';
    play(0,j);
}
if(i-1==-1 && A[y-1][j] == '*'){
    A[y-1][j] = '.';
    play(y-1,j);
}
if(j+1==x && A[i][0] == '*'){
    A[i][0] = '.';
    play(i,0);
}
if(j-1<=-1 && A[i][x-1] == '*'){
    A[i][x-1] = '.';
    play(i,x-1);
}
}
int main()
{
scanf("%d %d",&x,&y);
for(int i=0;i<y;i++){
    for(int j=0;j<x;j++){
        scanf(" %c",&A[i][j]);
    }
}
for(int i=0;i<y;i++){
    for(int j=0;j<x;j++){
     if(A[i][j]=='*'){
     play(i,j);
     c++;
     }
    }
}
printf("%d\n",c);
    return 0;
}
/*
10 5
. . * . . . . . * *
. * * . . * * * * *
. * . . . * . . . .
. . * * * * . * * *
. . * * * * . * * *
*/
