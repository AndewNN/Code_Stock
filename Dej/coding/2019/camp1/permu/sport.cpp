/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<stdio.h>
int n;
char an[500];
void p(int a,int b,int state){
    int i,j;
    if(a == n || b == n){
        for(i = 0;i<state;i++){
            printf("%c ",an[i]);
        }
        printf("\n");
        return ;
    }
    an[state] = 'W';
    p(a+1,b,state+1);
    an[state] = 'L';
    p(a,b+1,state+1);
}
int main()
{
    int a,b;
    scanf("%d %d %d",&n,&a,&b);
    p(a,b,0);
    return 0;
}
