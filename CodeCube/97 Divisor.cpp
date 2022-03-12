/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int a[100100];
int main()
{
    int n,i,cou=0;
    scanf("%d",&n);
    for(i=1;i<=sqrt(n);i++)
        if(n%i==0)
            a[cou]=i,cou++;
    for(i=0;i<cou;i++)
        printf("%d ",a[i]);
    for(i=cou-1;i>=0;i--)
        if(n!=a[i]*a[i])
            printf("%d ",n/a[i]);


    return 0;
}
