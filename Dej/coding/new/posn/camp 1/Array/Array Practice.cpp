/*
    TASK: Intro01
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<stdio.h>
int A[2000];
int main()
{
int b,c,e=0;
scanf("%d",&b);
for(int d=0;d<b;d++){
    scanf("%d",&A[d]);
}
scanf("%d",&c);
for(int d=b-1;d>=0;d--){
    printf("%d ",A[d]);
    if(A[d]==c){
        e = e+1;
    }
}
    printf("\n%d",e);
    return 0;
}
