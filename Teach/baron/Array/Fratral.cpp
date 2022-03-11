#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,l,sum,sum2;
    scanf("%d",&n);
    for(i=1;i<pow(2,n);i++){
        l=i;
        for(j=1<<n,sum=0;j>=1;j/=2){
            if(j>l)
                continue;
            if((l&-l)==l)
                break;
            l-=j;
            sum+=j/2;
        }
        for(j=0;j<sum;j++)
            printf("-");
       /* for(j=0;j<(i&-i);j++)
            printf("*");*/

        l=i,sum2=1;
        while(l%2==0){
            sum2*=2;
            l/=2;
        }
        for(j=0;j<sum2;j++)
            printf("*");

        for(j=0;j<(1<<(n-1))-sum-sum2;j++)
            printf("-");
        printf("\n");
    }


}
