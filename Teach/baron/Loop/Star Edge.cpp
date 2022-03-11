#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,q;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        for(i=0;i<2*n+1;i++){
            if(i==0||i==2*n)
                for(j=0;j<2*n+1;j++)
                    printf("*");
            if(i>0 && i<2*n && i%2==1){
                printf("*");
                for(j=0;j<i-1;j++)
                    printf("-");
                for(j=0;j<n-(i-1)/2;j++)
                    printf("-*");
            }
            if(i>0 && i<2*n && i%2==0){
                for(j=0;j<i+1;j++)
                    printf("*");
                for(j=0;j<n-i/2;j++)
                    printf("-*");
            }

            printf("\n");
        }
    }

}
