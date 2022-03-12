/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int r,c,i,j,n,si,sj,mk[5][5],di[8]={1,0,-1,0,1,1,-1,-1},dj[8]={0,1,0,-1,1,-1,1,-1};;
double a[5][5],an=1e11;
void play(int x,int y,int cou,double va){
    int ii,jj,k,aa,bb;
    if(cou==n){
        if(va < an){
            an = va;
        }
    }else{
    for(k=0;k<8;k++){
        ii = x+di[k],jj=y+dj[k];
        if(ii <1 || jj <1 || ii >r || jj>c){
            continue;
        }
        a[ii][jj]+=0.1*a[x][y];
    }
    for(aa=1;aa<=r;aa++){
        for(bb=1;bb<=c;bb++){
            if(mk[aa][bb]){
                continue;
            }else{
                mk[aa][bb]=1;
                play(aa,bb,cou+1,va+a[aa][bb]);
                mk[aa][bb]=0;
            }
        }
    }
    for(k=0;k<8;k++){
        ii = x+di[k],jj=y+dj[k];
        if(ii <1 || jj <1 || ii >r || jj>c){
            continue;
        }
         a[ii][jj]-=0.1*a[x][y];
    }
    }
}
int main()
{
    scanf("%d %d",&r,&c);
    n=r*c;
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            scanf("%lf",&a[i][j]);
        }
    }
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            mk[i][j]=1;
            play(i,j,1,a[i][j]);
            mk[i][j]=0;
        }
    }
    printf("%.2lf",an);
    return 0;
}
/*
3 3
500000 750000 1000000
500000 1200000 1000000
1000000 800000 750000
*/
