/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
char str[1001000];
int main()
{
    // t1 = 3 t2 = 11
    int len,i,t1=0,t2=0;
    scanf(" %s",str);
    len = strlen(str);
    for(i=0;i<len;i++){
        t1*=10,t2*=10;
        t1+=(str[i]-'0');
        t2+=(str[i]-'0');
        t1%=3;
        t2%=11;
    }
    printf("%d %d\n",t1,t2);
    return 0;
}
