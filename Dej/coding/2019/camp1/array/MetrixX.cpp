/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<stdio.h>
using namespace std;
int a[20][20],b[20][20],ans[20][20];
int main()
{
    int r,c,rr,cc,i,j,k;
    scanf("%d %d %d %d",&r,&c,&rr,&cc);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<rr;i++){
        for(j=0;j<cc;j++){
            scanf("%d",&b[i][j]);
        }
    }
    if(c!=rr){
        printf("Can't Multiply.");
    }else{
    for(i=0;i<r;i++){
        for(j=0;j<cc;j++){
            for(k=0;k<c;k++){
                ans[i][j]+=(a[i][k]*b[k][j]);
            }
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<cc;j++){
                printf("%d ",ans[i][j]);
        }
        printf("\n");
    }
    }
    return 0;
}
