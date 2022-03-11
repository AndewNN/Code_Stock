#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++)
            printf("*");
        printf("\n");
    }
    printf("\n");

    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf((j<i)? " ":"*");
        printf("\n");
    }
    printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++)
            printf(" ");
        for(j=0;j<2*i+1;j++)
            printf("*");
        printf("\n");
    }
    printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<2*n-1;j++){
            if(j==n-1+i||j==n-1-i||i==n-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
