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
    int i,n,q,t;
    scanf("%d %d %d",&n,&q,&a[0]);
    for(i=1;i<n;i++){
        scanf("%d",&a[i]);
        a[i] += a[i-1];
    }
    for(i=n-2;i>=0;i--){
        a[i] = min(a[i],a[i+1]);
    }
    while(q--){
            scanf("%d",&i);
    printf("%d\n",upper_bound(a,a+n,i)-a);
    }
    return 0;
}
