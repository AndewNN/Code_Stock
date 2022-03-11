/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[10][10],b[10];
char c[10];
int main()
{
    int i,j,x,na,nb,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
        scanf("%d",&b[i]);
    }
    while(1){
        scanf(" %s",c);
        if(c[1]=='-'){
            x = -1;
        }else{
            x = 1;
        }
        na = c[0]-'0'-1;
        nb = c[2]-'0'-1;
        for(i=0;i<n;i++){
            a[na][i]+=(x*(a[nb][i]));
        }
        b[na]+=(x*b[nb]);
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                printf("%d ",a[i][j]);
            }
            printf("%d\n",b[i]);
        }
    }
}
