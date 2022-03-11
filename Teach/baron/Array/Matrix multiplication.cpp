#include<stdio.h>
int A[12][12],B[12][12],C[12][12];
int main()
{
    int n1,m1,n2,m2,sum=0,i,j,k,l;
    scanf("%d %d %d %d",&n1,&m1,&n2,&m2);
    for(i=0; i<n1; i++){
        for(j=0; j<m1; j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0; i<n2; i++){
        for(j=0; j<m2; j++){
            scanf("%d",&B[i][j]);
        }
    }
    if(m1 != n2)
        printf("Can't Multiply.");
    else{
        for(i=0; i<n1; i++){
            for(j=0; j<m2; j++){
                for(k=0; k<m1; k++){
                    sum+=A[i][k]*B[k][j];
                }
                C[i][j]=sum;
                sum =0;
            }
        }
    }
    for(i=0;i<n1;i++){
        for(j=0;j<m2;j++)
            printf("%d ",C[i][j]);
        printf("\n");
    }
    return 0;
}
/*

2 3 3 2
4 5 -2
3 -4 1
-1 2
-5 -3
3 -6

*/
