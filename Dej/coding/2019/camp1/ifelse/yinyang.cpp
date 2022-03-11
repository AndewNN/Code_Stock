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
    int q,i,j,n,k;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        for(i=1;i<=n+2;i++){
            for(j=n+1;j>=i;j--){
                printf(".");
            }
            for(j=1;j<=i;j++){
                printf("#");
            }
            for(j=1;j<=n+2;j++){
                if(i==1 || i == n+2 || j == 1 || j == n+2){
                    printf("+");
                }else{
                    printf("#");
                }
            }
            printf("\n");
        }
        for(i=1;i<=n+2;i++){
            for(j=1;j<=n+2;j++){
                if(i==1 || i == n+2 || j == 1 || j == n+2){
                    printf("#");
                }else{
                    printf("+");
                }
            }
            for(j=n+2;j>=i;j--){
                printf("+");
            }
            for(j=1;j<=i-1;j++){
                printf(".");
            }
            printf("\n");
        }
    }
    return 0;
}
