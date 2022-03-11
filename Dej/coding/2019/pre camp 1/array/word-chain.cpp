/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
char a[1100],b[1100],c[1100];
int main()
{
    int i,l,n,d,ch=1;
    scanf("%d %d",&l,&n);
    scanf(" %s",b);
    n-=1;
    while(n--){
        d=2;
        scanf(" %s",a);
        for(i=0;i<l;i++){
            if(a[i]!=b[i]){
                d-=1;
            }
        }
        if(d<0 && ch){
            ch = 0;
            for(i=0;i<l;i++){
                c[i] = b[i];
            }
        }
        for(i=0;i<l;i++){
            b[i]=a[i];
        }
    }
    if(ch){
        for(i=0;i<l;i++){
            printf("%c",b[i]);
        }
    }else{
    for(i=0;i<l;i++){
            printf("%c",c[i]);
        }
    }
    return 0;
}
/*
4
12
HEAD
HEAP
LEAP
TEAR
REAR
BAER
BAET
BEEP
JEEP
JOIP
JEIP
AEIO
*/
