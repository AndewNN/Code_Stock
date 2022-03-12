/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[10000000];
int main()
{
    int n,i,j,m,cou=1;
    a[2]=1;
    m = sqrt(10000000);
    for(i=3;i<=10000000;i+=2){
        a[i]=1;
    }
    for(i=3;i<=m;i+=2){
        if(a[i]){
            for(j=i*i;j<=10000000;j+=i){
                a[j]=0;
            }
        }
    }
    scanf("%d",&n);
    if(n==1){
        printf("2");
    }else{
        for(i=3;i<=1000000;i++){
            if(a[i]){
                cou++;
            }
            if(cou==n){
                printf("%d",i);
                break;
            }
        }
    }
    return 0;
}
