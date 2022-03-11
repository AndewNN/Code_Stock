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
    int n;
    double a=0,i;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
        a+=((i*i)/(2*i+1))/(2*i-1);
    printf("%lf",a);
    return 0;
}
