/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
char a[10],an[10];
int main()
{
    int len,ans,m,i,j;
    for(i=0;i<5;i++){
        scanf(" %s",a);
        len = strlen(a);
        for(j=0,ans=0;j<len;j++){
            ans += pow(a[j]-'0',j+1);
        }
        for(j=0,m=0;j<len;j++){
            m*=10;
            m+=(a[j]-'0');
        }
        if(ans==m){
            an[i]='Y';
        }else{
            an[i]='N';
        }
    }
    for(i=0;i<5;i++){
        printf("%c",an[i]);
    }
    return 0;
}
