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
    int n,i,j;
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("error");
        return 0;
    }
    for(i=0;i<n/2+1;i++)
    {
        for(j=0;j<i;j++)
            printf(" ");
        for(j=0;j<((n/2)-i)*2+1;j++)
            printf("*");
        printf("\n");
    }
    for(i=0;i<n/2;i++)
    {
        for(j=0;j<n/2-i-1;j++)
            printf(" ");
        for(j=0;j<2*(i+1)+1;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
