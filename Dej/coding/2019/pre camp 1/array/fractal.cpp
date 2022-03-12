/*
    TASK:b
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
char a[2100][1100];
int main()
{
    int i,j,k,l,ei,ej,si,sj,n;
    scanf("%d",&n);
    memset(a,'-',sizeof a);
    a[1][1]='*';
    ei=1,ej=1;
    for(k=1;k<=10;k++){
        for(i=1;i<=(1<<k);i++){
            a[(1<<k)][i]='*';
        }
        si = (1<<k)+1,sj=i-(1<<k-1);
        for(i=0;i<2*((1<<k-1)-1)+1;i++){
            for(j=0;j<(1<<k)-1;j++){
                a[si+i][sj+j] = a[ei+i][ej+j];
            }
        }
    }
    for(i=1;i<=2*(1<<n-1)-1;i++){
        for(j=1;j<=(1<<n-1);j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
