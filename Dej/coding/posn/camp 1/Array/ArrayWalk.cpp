/*
    TASK: Intro01
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<stdio.h>
int A[30][30];
int main()
{
int a,b;
scanf("%d %d",&a,&b);
for(int c=0;c<a;c++){
    for(int d=0;d<b;d++){
        scanf("%d",&A[c][d]);
    }
}
for(int e=0;e<a;e++){
    for(int f=0;f<b;f++){
        printf("%d ",A[e][f]);
    }
}
        printf("\n");
for(int e=a-1;e>=0;e--){
    for(int f=b-1;f>=0;f--){
        printf("%d ",A[e][f]);
    }
}
        printf("\n");
for(int e=0;e<b;e++){
    for(int f=0;f<a;f++){
        printf("%d ",A[f][e]);
    }
}
        printf("\n");
for(int f=b-1;f>=0;f--){
    for(int e=a-1;e>=0;e--){
        printf("%d ",A[e][f]);
    }
}
    return 0;
}
/*
3 5
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15*/
