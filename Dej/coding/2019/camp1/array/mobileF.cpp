/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<stdio.h>
#include<stdlib.h>
int a[40][40],di[2]={1,0},dj[2]={0,1};
int main()
{
    int t,r,c,ma,i,j,k,ai,aj,x,y;
    scanf("%d",&t);
    while(t--){
        ma = -1;
        scanf("%d %d",&r,&c);
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                for(k=0;k<2;k++){
                    x = i+di[k];
                    y =  j+dj[k];
                    if(i+di[k]>=r || j + dj[k]>=c){
                        continue;
                    }
                    if(a[i][j]+a[x][y]>ma && abs(a[i][j]-a[x][y])<=10){
                        ma = a[i][j]+a[x][y];
                        ai = i;
                        aj = j;
                    }
                }
            }
        }
        printf("%d %d\n",ai+1,aj+1);
    }
    return 0;
}
