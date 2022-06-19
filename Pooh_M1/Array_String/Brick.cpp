#include<bits/stdc++.h>
using namespace std;
char a[30][30];
int aa[30],b[30];
int main(){
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf(" %c",&a[i][j]);
    for(j=0;j<m;j++)
        scanf("%d",&b[j]);
    for(j=0;j<m;j++){
        aa[j] = n;
        for(i=0;i<n;i++)
            if(a[i][j] == 'O'){
                aa[j] = i;
                break;
            }
    }
    for(j=0;j<m;j++)
        for(i=max(0,aa[j]-b[j]);i<aa[j];i++)
            a[i][j] = '#';
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
            printf("%c",a[i][j]);
        printf("\n");
    }
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