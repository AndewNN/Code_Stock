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
    int i,cou=0;
    for(i=2;i<=10;i++)
        cou+=1+i+i*i;
    printf("%d\n",cou);

    return 0;
}

