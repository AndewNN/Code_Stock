/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[40][40],di[2]={1,0},dj[2]={0,1};
int main()
{
    int i,j,t,r,c,k,ma,ai,aj,ii,jj;
    scanf("%d",&t);
    while(t--){
        ma = -1000;
        scanf("%d %d",&r,&c);
        for(i=1;i<=r;i++){
            for(j=1;j<=c;j++){
                scanf("%d",&a[i][j]);
            }
        }
        for(i=1;i<=r;i++){
            for(j=1;j<=c;j++){
                for(k=0;k<2;k++){
                    ii = i+di[k],jj = j+dj[k];
                    if(ii >r || jj > c){
                        continue;
                    }
                    if(abs(a[i][j]-a[ii][jj])>10){
                        continue;
                    }
                    if(a[i][j]+a[ii][jj]>ma){
                        ma = a[i][j]+a[ii][jj];
                        ai = i;
                        aj = j;
                    }
                }
            }
        }
        printf("%d %d\n",ai,aj);
    }
    return 0;
}
/*
2
4 5
5 1 2 10 4
4 30 3 0 100
3 25 10 4 10
3 20 4 8 5
4 4
0 0 0 0
0 0 0 0
0 1 1 1
1 1 0 0
*/
