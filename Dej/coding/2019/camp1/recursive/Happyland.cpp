/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<stdio.h>
int r,c,mk[5][5];
double a[5][5],mi=1e9,di[8]={1,0,-1,0,1,1,-1,-1},dj[8]={0,1,0,-1,1,-1,1,-1};
void p(int i,int j,double sum,int state){
    int k,v,ii,jj;
    for(k=0;k<8;k++){
        ii = i+di[k];
        jj = j+dj[k];
        if(ii < 1 || jj < 1 || ii > r || jj > c){
            continue;
        }
        a[ii][jj] += (a[i][j]/10);
    }
    if(state == r*c){
        if(sum < mi){
            mi = sum;
        }
    }
    for(k=1;k<=r;k++){
        for(v=1;v<=c;v++){
            if(!mk[k][v]){
                mk[k][v]=1;
                p(k,v,sum+a[k][v],state+1);
                mk[k][v]=0;
            }
        }
    }
    for(k=0;k<8;k++){
        ii = i+di[k];
        jj = j+dj[k];
        if(ii < 1 || jj < 1 || ii > r || jj > c){
            continue;
        }
        a[ii][jj] -= (a[i][j]/10);
    }
}
int main()
{
    int i,j;
    scanf("%d %d",&r,&c);
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            scanf("%lf",&a[i][j]);
        }
    }
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            mk[i][j]=1;
            p(i,j,a[i][j],1);
            mk[i][j]=0;
        }
    }
    printf("%.2lf",mi);
    return 0;
}
