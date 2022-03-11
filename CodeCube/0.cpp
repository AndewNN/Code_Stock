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
    double a=1,now=0,cou=0,x,y;
    int i,n,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        x=2*i-1;
        y=2;
        for(now=x,j=0;j<i;j++)
            now/=y;
        cou+=now;
    }
    printf("%lf",cou);


    return 0;
}
