/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
char a[30][30];
int b[30];
int main()
{
    int n,m,i,j,k,st;
    for(i=1;i<=30;i++){
        b[i]=100;
    }
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            scanf(" %c",&a[i][j]);
            if(a[i][j]=='O'){
                if(i<b[j]){
                    b[j]=i;
                }
            }
        }
    }
    for(i=1;i<=m;i++){
        scanf("%d",&k);
        if(b[i]==100){
            st = n;
        }else{
            st = b[i]-1;
        }
        while(k--){
            if(st>0){
                a[st][i] = '#';
                st--;
            }
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*
8 5
.....
.....
.OO..
.....
.O...
...O.
.....
.....
1 1 3 2 0
*/
