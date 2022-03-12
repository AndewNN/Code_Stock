/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<stdio.h>
int a[30][30],di[4]={1,0,-1,0},dj[4]={0,1,0,-1},m,si,sj,ma=-1;
void p(int i,int j){
    if(a[i][j]>ma){
        ma = a[i][j];
    }
    int k,ii,jj;
    for(k=0;k<4;k++){
        ii = i+di[k],jj = j+dj[k];
        if(ii < 1 || jj < 1 || ii > m || jj > m){
            continue;
        }
        if(a[ii][jj] == 100 || a[i][j] >= a[ii][jj]){
            continue;
        }
        p(ii,jj);
    }
}
int main()
{
    int i,j;
    scanf("%d %d %d",&m,&sj,&si);
    for(i=1;i<=m;i++){
        for(j=1;j<=m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    p(si,sj);
    printf("%d",ma);
    return 0;
}
