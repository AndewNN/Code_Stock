/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<stdio.h>
#include<string.h>
using namespace std;
char a[110];
int main()
{
    int i=0,j=0,len,k;
    scanf(" %s",a);
    len = strlen(a);
    for(k=0;k<len;k++){
        if(a[k]=='N'){
            i++;
        }else if(a[k]=='E'){
            j++;
        }else if(a[k]=='S'){
            i--;
        }else if(a[k]=='W'){
            j--;
        }else{
            i=0;
            j=0;
        }
    }
    printf("%d %d",j,i);
    return 0;
}
