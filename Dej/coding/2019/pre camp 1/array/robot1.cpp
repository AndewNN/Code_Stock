/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
char a[110];
int main()
{
    int len,i=0,j=0,k;
    scanf(" %s",a);
    len = strlen(a);
    for(k=0;k<len;k++){
        if(a[k]=='N'){
            i++;
        }else if(a[k]=='S'){
            i--;
        }else if(a[k]=='E'){
            j++;
        }else if(a[k]=='W'){
            j--;
        }else{
            i=0,j=0;
        }
    }
    printf("%d %d\n",j,i);
    return 0;
}
