/*
    TASK: Intro01
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<stdio.h>
int A[40][40];
int main()
{
int a,c,d,wx,wy,maxv=0;
scanf("%d",&a);
for(int b=0;b<a;b++){
    scanf("%d %d",&c,&d);
    for(int i=0;i<c;i++){
        for(int j=0;j<d;j++){
            scanf("%d",&A[i][j]);
        }
    }
for(int i=0;i<c;i++){
    for(int j=0;j<d;j++){
        if(A[i][j]-A[i+1][j]<=10 && A[i][j]-A[i+1][j]>=-10 && i+1<c){
            if(A[i][j]+A[i+1][j] > maxv){
                maxv = A[i][j]+A[i+1][j];
                wy = i;
                wx = j;
            }
        }
            if(A[i][j]-A[i][j+1]<=10 && A[i][j]-A[i][j+1]>=-10 && j+1<d){
            if(A[i][j]+A[i][j+1] > maxv){
                maxv = A[i][j]+A[i][j+1];
                wy = i;
                wx = j;
            }
        }
        }
    }
    printf("%d %d\n",wy+1,wx+1);
    maxv = 0;
    wy =0;
    wx =0;
}
    return 0;
}
/*
2
4 5
5 1 2 10 4
4 30 3 0 100
3 25 10 4 10
3 20 4 8 5
4 4
0 0 0 0
0 0 0 0
0 1 1 1
1 1 0 0 */
