/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
char a[100100];
int main()
{
    int n,i,ch=1;
    scanf("%d %s",&n,a);
    a[n]='P';
    for(i=0;i<n;i++)
        if(a[i]==a[i+1])
            ch=0;
    if(ch)
        printf("Accepted");
    else
        printf("Wrong Answer");


    return 0;
}
