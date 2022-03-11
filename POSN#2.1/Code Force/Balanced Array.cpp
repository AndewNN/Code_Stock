/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,n,i,j,cou;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d",&n);
        if(n%4!=0)
        {
            printf("NO\n");
            continue;
        }
        printf("YES\n");
        for(i=1;i<=n/2;i++)
            printf("%d ",i*2);
        for(i=1;i<=n/2-1;i++)
            printf("%d ",i*2-1);
        printf("%d\n",n-1+n/2);
    }


    return 0;
}
