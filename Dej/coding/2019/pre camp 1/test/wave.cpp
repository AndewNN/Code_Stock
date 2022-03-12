/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
char a[450][450];
int main()
{
    int q=99,n,m,i,j,k,mi,mj,ai,aj,x,bi;
    memset(a,'.',sizeof a);
    m=4*(99)+1;
    n=2;
    mi = mj = (m+1)/2;
    a[mi][mj] = '#';
    ai=3;
    bi = mi;
    while(q--){
        aj = 4*(n-1)+1;
        a[bi][bi-1] = a[bi][bi-2] = '#';
        for(i=0;i<ai;i++){
            a[bi+i][bi-2] = '#';
        }
        for(i=0;i<aj;i++){
            a[bi+ai-1][bi-2+i]='#';
            a[bi+aj-3-i][bi+aj-3]='#';
            a[bi-2][bi-2+i]='#';
        }
        bi=bi-2;
        ai+=4;
        n+=1;
    }
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        m=4*(n-1)+1;
        x = (m+1)/2;
        for(i=1;i<=m;i++){
            for(j=1;j<=m;j++){
                printf("%c",a[198-x+i+1][198-x+j+1]);
            }
            printf("\n");
        }
    }
    return 0;
}
