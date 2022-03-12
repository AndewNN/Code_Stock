/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[30],b[30],c[30];
int main()
{
    a[0]=1;
    int n,i,j;
    for(i=1;i<=24;i++){
        c[i] = a[i-1];
        a[i] += 1+c[i-1]+a[i-1];
        b[i] = a[i]+c[i]+1;
    }
    while(1){
        scanf("%d",&n);
        if(n==-1){
            break;
        }
        printf("%d %d\n",a[n],b[n]);
    }
    return 0;
}
