#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n,q;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        for(i=0;i<n+2;i++){
            for(j=0;j<n-i+1;j++)
                printf(".");
            for(j=0;j<i+1;j++)
                printf("#");
            if(i==0||i==n+1){
                for(j=0;j<n+2;j++)
                    printf("+");
            }
            else{
                printf("+");
                for(j=0;j<n;j++)
                    printf("#");
                printf("+");
            }
            printf("\n");
        }
        for(i=0;i<n+2;i++){
            for(j=0;j<n+2;j++){
                if(i>0&&i<n+1 && j>0&&j<n+1)
                    printf("+");
                else{
                    printf("#");
                }
            }
            for(j=0;j<n+2;j++)
                if(j<n+2-i)
                    printf("+");
                else
                    printf(".");
            printf("\n");
        }
    }


}
