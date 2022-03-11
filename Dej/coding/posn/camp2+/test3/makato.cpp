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
    int n,q,i,b,c;
    scanf("%d %d",&n,&q);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
        a[i]^=a[i-1];
    }
    while(q--){
        scanf("%d %d",&b,&c);
        printf("%d\n",a[c]^a[b-1]);
    }
    return 0;
}
