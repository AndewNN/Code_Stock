/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int a[300005];
int main()
{
    int q,n,i,ser;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=n-1,ser=n;i>=0;i--)
            if(a[i]==ser)
                ser--;
        printf("%d\n",ser);
    }



    return 0;
}

