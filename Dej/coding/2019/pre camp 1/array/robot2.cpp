/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
char a[110];
int len,i,j,c=1,b,d;
void p(int b){
            if(c!=b){
                d= (b-c+4)%4;
                for(j=0;j<d;j++){
                    printf("R");
                }
            }
            printf("F");
            c=b;
}
int main()
{

    scanf(" %s",a);
    len = strlen(a);
    for(i=0;i<len;i++){
        if(a[i]=='N'){
            p(1);
        }else if(a[i]=='E'){
            p(2);
        }else if(a[i]=='S'){
            p(3);
        }else if(a[i]=='W'){
            p(4);
        }else{
            c=1;
            printf("Z");
        }
    }
    return 0;
}
