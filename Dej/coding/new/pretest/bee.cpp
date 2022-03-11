/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[25],b[25],c[25];
int main()
{
    int i,n;
    a[0]=1;
    b[0]=0;
    for(i=1;i<=24;i++){
        a[i]=a[i-1]+b[i-1]+1;
        b[i]=a[i-1];
        c[i]=a[i]+b[i]+1;
    }
    while(1){
        scanf("%d",&n);
        if(n==-1){
            break;
        }
        printf("%d %d\n",a[n],c[n]);
    }
    return 0;
}
