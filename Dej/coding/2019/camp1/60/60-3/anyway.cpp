#include<bits/stdc++.h>
using namespace std;
int a[1100][1100];
int main()
{
    int i,j,x,y,k,r,c;
    scanf("%d %d %d",&y,&x,&k);
    while(k--){
        scanf("%d %d",&r,&c);
        a[c+1][r+1]=-1;
    }
    a[1][0]=1;
    a[0][1]=0;
    for(i=1;i<=x+1;i++){
        for(j=1;j<=y+1;j++){
            if(a[i][j]==-1){
                a[i][j]=0;
            }else{
                a[i][j] = a[i-1][j] + a[i][j-1];
                a[i][j]%=1000000;
            }
        }
    }
    printf("%d\n",a[x+1][y+1]);
    return 0;
}
