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
    int i,j,k,d;
    scanf("%d",&d);
    j = sqrt(d);
    if(d==1){
        printf("No\n");
    }else if(d==2){
        printf("Yes\n");
    }else if(d%2==0){
        printf("No\n");
    }else{
    for(i=3;i<=j;i+=2){
        if(d%i==0){
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    }
    return 0;
}
