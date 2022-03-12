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
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n/2+1;i++)
    {
        for(j=0;j<(n-(2*i-1))/2;j++)
            printf("-");
        for(j=0;j<2*i-1;j++)
            printf("*");
        for(j=0;j<(n-(2*i-1))/2;j++)
            printf("-");
        printf("\n");
    }
    for(i=n/2;i>=1;i--)
    {
        for(j=0;j<(n-(2*i-1))/2;j++)
            printf("-");
        for(j=0;j<2*i-1;j++)
            printf("*");
        for(j=0;j<(n-(2*i-1))/2;j++)
            printf("-");
        printf("\n");
    }


    return 0;
}
