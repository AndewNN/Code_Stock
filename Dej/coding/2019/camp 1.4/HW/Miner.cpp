#include<bits/stdc++.h>
using namespace std;
char a[100100];
int b[10],c[10];
int main()
{
    int len,i,sum=0,cb=0,cc=0,ty;
    scanf("%d %s",&len,a);
    for(i=0;i<len;i++){
        if(a[i]=='M'){
            ty = 1;
        }else if(a[i]=='B'){
            ty = 2;
        }else{
            ty = 3;
        }

    }
    return 0;
}
