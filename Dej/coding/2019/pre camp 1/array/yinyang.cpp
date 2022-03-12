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
    int q,n,i,j,k;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        for(i=1;i<=2*(3+n-1);i++){
            if(i<=3+n-1){
                for(j=3+n-2;j>=i;j--){
                    printf(".");
                }
                for(j=1;j<=i;j++){
                    printf("#");
                }
                for(j=1;j<=3+n-1;j++){
                    if(i==1 || i == 3+n-1 || j == 1|| j == 3+n-1){
                        printf("+");
                    }else{
                        printf("#");
                    }
                }
            }else{
                for(j=1;j<=3+n-1;j++){
                    if(i==3+n || i == 2*(3+n-1) || j == 1|| j == 3+n-1){
                        printf("#");
                    }else{
                        printf("+");
                    }
                }
                for(j=3+n-2;j>=i-(3+n);j--){
                    printf("+");
                }
                for(j=1;j<=i-(3+n);j++){
                    printf(".");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
