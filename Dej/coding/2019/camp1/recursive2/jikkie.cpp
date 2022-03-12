/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<stdio.h>
int an[30],a,b,c,mk[25][25][25];
void p(int A,int B,int C){
    if(A < 0 || A > a || B < 0 || B > b || C < 0 || C > c){
        return ;
    }
    if(mk[A][B][C]){
        return ;
    }
    if(A == 0){
        an[C]=1;
    }
    mk[A][B][C]=1;
    p(0,A+B,C);   p(A-b+B,b,C);
    p(A+B,0,C);   p(a,B-a+A,C);
    p(A,0,C+B);   p(A,B-c+C,c);
    p(A,C+B,0);   p(A,b,C-b+B);
    p(0,B,C+A);   p(A-c+C,B,c);
    p(C+A,B,0);   p(a,B,C-a+A);
}
int main()
{
    int i;
    scanf("%d %d %d",&a,&b,&c);
    p(0,0,c);
    for(i=0;i<=c;i++){
        if(an[i]>0){
            printf("%d ",i);
        }
    }
    return 0;
}
