/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[5];
int main()
{
    int b,c;
    scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3]);
    sort(a,a+4);
    b = min(a[0],a[1]);
    c = min(a[2],a[3]);
    printf("%d",b*c);
    return 0;
}
