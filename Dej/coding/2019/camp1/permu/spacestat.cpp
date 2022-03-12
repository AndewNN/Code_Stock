/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<stdio.h>
int a[20],b[20],d;
void pr(){
    int i;
    for(i = 0 ; i < d ; i++){
        printf("%d",a[i]);
    }
    printf(" ");
    for(i = 0 ; i < d ; i++){
        printf("%d",b[i]);
    }
    printf("\n");
}
void p(int state){
    int i,j;
    if(state == d){
        for(i = d-1;i>=0;i--){
            if(a[i]==0){
                b[i]=1;
                pr();
                b[i]=0;
            }
        }
        return ;
    }
    a[state] = 0;
    b[state] = 0;
    p(state+1);
    a[state] = 1;
    b[state] = 1;
    p(state+1);
}
int main()
{
    scanf("%d",&d);
    p(0);
    return 0;
}
