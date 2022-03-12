/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,n,k;
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i++){
        if(i<n){
            for(j=1;j<=i;j++){
                printf("*");
            }
            for(j=n-1;j>=i;j--){
                printf("-");
            }
            for(j=n-2;j>=i;j--){
                printf("-");
            }
            for(j=1;j<=i;j++){
                printf("*");
            }
        }
        if(i==n){
            for(j=1;j<=2*n-1;j++){
                printf("*");
            }
        }
        if(i>n){
                k = i-n;
            for(j=n-1;j>=k;j--){
                printf("*");
            }
            for(j=1;j<=k;j++){
                printf("-");
            }
            for(j=1;j<=k-1;j++){
                printf("-");
            }
            for(j=n-1;j>=k;j--){
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
