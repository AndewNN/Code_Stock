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
    int cou=0,n;
    scanf("%d",&n);
    if(n>=15)
        cou+=3000*(n/15);
    n%=15;

    if(n>=10)
        cou+=3000,n=0;

    if(n>=5)
        cou+=1500*(n/5);
    n%=5;

    if(n==4)
        cou+=1500,n=0;


    if(n>=2)
        cou+=800*(n/2);
    n%=2;

    if(n>=1)
        cou+=500*(n/1);
    n%=1;

    printf("%d",cou);
    return 0;
}
