/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[100100];
int main()
{
    int q,n,i;
    a[1]=a[2]=a[3]=1;
    a[4]=2;
    a[5]=3;
    for(i=6;i<=100000;i++){
        a[i]=a[i-1]+a[i-4];
        a[i]%=100003;
    }
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        printf("%d\n",a[n]);
    }
    return 0;
}
