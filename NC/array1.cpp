/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int a[110];
int main()
{
    int n,i,cou;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(i=0; i<n; i++)
        printf("%d ",a[i]);
    for(cou=0,i=0 ; i<n ; i++)
        cou+=a[i];
    printf("\n%.2f", double(cou)/double(n));
    return 0;
}
