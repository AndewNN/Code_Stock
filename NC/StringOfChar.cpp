/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
char a[1100];
int main()
{
    int n,i;
    scanf("%d",&n) ;
    for(i=0;i<n;i++)
        scanf(" %c",&a[i]);
    for (i=n-1;i>=0;i--)
        printf("%c",a[i]);
    printf("\n");
    scanf(" %s",a);
    printf ("%d",strlen(a)) ;








    return 0;
}
