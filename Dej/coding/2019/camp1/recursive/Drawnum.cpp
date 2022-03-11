/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<stdio.h>
#include<string.h>
int a[10][10],ans[10][10][10][10][10][10],an,di[4]={1,0,-1,0},dj[4]={0,1,0,-1},c[10];
void p(int i,int j,int state){
    if(state == 5){
        if(ans[c[0]][c[1]][c[2]][c[3]][c[4]][c[5]] == 0){
            ans[c[0]][c[1]][c[2]][c[3]][c[4]][c[5]]+=1;
            an++;
        }
        return ;
    }
    int ii,jj,k;
    for(k=0;k<4;k++){
        ii = i + di[k],jj = j+ dj[k];
        if(ii < 1 || jj < 1 || ii > 5 || jj > 5){
            continue;
        }
        c[state+1] = a[ii][jj];
        p(ii,jj,state+1);
    }
}
int main()
{
    int q,i,j;
    scanf("%d",&q);
    while(q--){
        memset(ans,0,sizeof ans);
        an=0;
        for(i=1;i<=5;i++){
            for(j=1;j<=5;j++){
                scanf("%d",&a[i][j]);
            }
        }
        for(i=1;i<=5;i++){
            for(j=1;j<=5;j++){
                c[0] = a[i][j];
                p(i,j,0);
            }
        }
        printf("%d\n",an);
    }
    return 0;
}
