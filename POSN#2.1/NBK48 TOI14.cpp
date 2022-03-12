/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int a[100100],qs[100100];
int main()
{
    int m,i,q,n;
    scanf("%d %d",&n,&q);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
        qs[i]=a[i]+qs[i-1];
    }
    for(i=n-1;i>=1;i--){
        if(qs[i]>qs[i+1])
            qs[i]=qs[i+1];
    }
    while(q--)
    {
        scanf("%d",&m);
        printf("%d\n",upper_bound(qs,qs+n+1,m)-&qs[0]-1);
    }
    return 0;
}
