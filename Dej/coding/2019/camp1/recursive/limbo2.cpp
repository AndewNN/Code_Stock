/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<stdio.h>
char a[1000][1100];
int di[8]={1,0,-1,0,1,1,-1,-1},dj[8]={0,1,0,-1,1,-1,1,-1},cou,r,c;
void p(int i,int j){
    a[i][j]='.';
    cou++;
    int ii,jj,k;
    for(k=0;k<8;k++){
        ii = i+di[k],jj=j+dj[k];
        if(ii < 0 || jj < 0 || ii >=r || jj >=c){
            continue;
        }
        if(a[ii][jj]=='*'){
            p(ii,jj);
        }
    }
}
int main()
{
    int i,j,ma=1e9;
    scanf("%d %d",&c,&r);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf(" %c",&a[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(a[i][j]=='*'){
                cou = 0;
                p(i,j);
                if(cou <ma){
                    ma = cou;
                }
            }
        }
    }
    printf("%d\n",ma);
    return 0;
}
