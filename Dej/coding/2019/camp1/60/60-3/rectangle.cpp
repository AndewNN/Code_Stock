#include<bits/stdc++.h>
using namespace std;
int a[1100][1100];
int main()
{
    int i,j,r,c,q,b,x,y,xx,yy;
    scanf("%d %d",&r,&c);
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            scanf("%d",&b);
            a[i][j] += a[i-1][j]+a[i][j-1]-a[i-1][j-1]+b;
        }
    }
    scanf("%d",&q);
    while(q--){
        scanf("%d %d %d %d",&x,&y,&xx,&yy);
        printf("%d\n",a[xx+1][yy+1]-a[x][yy+1]-a[xx+1][y]+a[x][y]);
    }
    return 0;
}
