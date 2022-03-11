#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        if(i==0){
            for(j=0;j<4*n+3;j++){
                if(j%(n+1)==n ||(j>3*n+3 && j<4*n+2))
                    printf("-");
                else
                    printf("*");
            }
        }
        if(i>0 && i<(n-1)/2){
            for(j=0;j<3*n+3;j++){
                if((j%(n+1)==0||j%(n+1)==n-1)&&j!=3*n+1)
                    printf("*");
                else
                    printf("-");
            }
            for(;j<4*n+3;j++){
                if(j==(3*n+3+i) || j==3*(n+1) || j==4*n+2)
                    printf("*");
                else
                    printf("-");
            }
        }
        if(i==(n-1)/2){
            for(j=0;j<3*n+3;j++){
                if(j%(n+1)==n||(j>n+1&&j<2*n))
                    printf("-");
                else
                    printf("*");
            }
            for(;j<4*n+3;j++){
                if(j==(3*n+3+i) || j==3*(n+1) || j==4*n+2)
                    printf("*");
                else
                    printf("-");
            }
        }
        if(i<n-1 && i>(n-1)/2){
            for(j=0;j<3*n+3;j++){
                if((j%(n+1)==0||j%(n+1)==n-1)&&j!=n-1&&j!=2*n+2)
                    printf("*");
                else
                    printf("-");
            }
            for(;j<4*n+3;j++){
                if(j==(3*n+3+i) || j==3*(n+1) || j==4*n+2)
                    printf("*");
                else
                    printf("-");
            }
        }
        if(i==n-1){
            for(j=0;j<4*n+3;j++){
                if((j%(n+1)==0||j%(n+1)==n-1||(j>n && j<2*n+1)||(j>2*n+1 && j<3*n+2) )&&j!=n-1)
                    printf("*");
                else if(j>3*n+3 && j<4*n+2)
                    printf("-");
                else
                    printf("-");



            }
        }
        printf("\n");
    }
    return 0;
}
