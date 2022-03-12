/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<stdio.h>
#include<string.h>
char a[500][500];
int main()
{
    int t,n,cou,i,j,k,st,si;
    scanf("%d",&t);
    while(t--){
        cou = 0;
        scanf("%d",&n);
        memset(a,'.',sizeof a);
        a[1][1]='#';
        si=1;
        st = 4*(n-1)+1;
        for(k=n;k>1;k--){
            for(i=si;i<=st-si+1;i++){
                a[si][i] = '#';
                a[st-si+1][i] = '#';
                a[i][st-si+1] = '#';
            }
            for(i=si;i<=st-si-1;i++){
                a[i+2][si]='#';
            }
            a[si+2][si+1]='#', a[si+2][si+2]='#';
            si+=2;
        }
        for(i=1;i<=4*n-3;i++){
            for(j=1;j<=4*n-3-cou;j++){
                printf("%c",a[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
