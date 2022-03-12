#include<bits/stdc++.h>
using namespace std;
int a[150];
int main()
{
    int n,i,j;
    scanf("%d",&n);
    a[0]=1;
    for(i=0;i<=n;i++){
        if(a[i]==1){
            a[i+6]=1;
        }
    }
    for(i=0;i<=n;i++){
        if(a[i]==1){
            a[i+9]=1;
        }
    }
    for(i=0;i<=n;i++){
        if(a[i]==1){
            a[i+20]=1;
        }
    }
    if(n <= 5){
        printf("no\n");
    }else{
        for(i=1;i<=n;i++){
            if(a[i]){
                printf("%d\n",i);
            }
        }
    }
    return 0;
}
