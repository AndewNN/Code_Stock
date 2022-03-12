/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int a[1001000];
int main()
{
    int n,i,x,now=0,ad;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        ad=upper_bound(a,a+now+1,x)-a;
        //printf("%d",ad);
        if(ad>now)
            now++;
        a[ad]=x;

    }
    printf("%d",n-now);
    return 0;
}
