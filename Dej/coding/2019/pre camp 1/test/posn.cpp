/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,q;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                if(j==1 || i==1 || i==(n/2)+1){
                    printf("*");
                }else if(j==n && i<=(n/2)+1){
                    printf("*");
                }else{
                    printf("-");
                }
            }
            printf("-");
            for(j=1;j<=n;j++){
                if(i==1 || i==n || j==1 || j==n){
                    printf("*");
                }else{
                    printf("-");
                }
            }
            printf("-");
            for(j=1;j<=n;j++){
                if(i==1 || i==(n/2)+1 || i == n){
                    printf("*");
                }else if((j==n && i>=(n/2)+1) || (j==1 && i<=(n/2)+1)){
                    printf("*");
                }else{
                    printf("-");
                }
            }
            printf("-");
            for(j=1;j<=n;j++){
                if(j==1 || j==n){
                    printf("*");
                }else if(j==i){
                    printf("*");
                }else{
                    printf("-");
                }
            }
          printf("\n");
        }
    }
    return 0;
}
