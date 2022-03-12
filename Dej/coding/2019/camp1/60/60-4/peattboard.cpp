#include<bits/stdc++.h>
using namespace std;
int a[1100][1100];
int main()
{
    int w,h,q,i,j,x,y,x1,y1;
    scanf("%d %d %d",&h,&w,&q);
    while(q--){
        scanf("%d %d %d %d",&y,&x,&y1,&x1);
        a[x][y]++;
        a[x1+1][y]--;
        a[x][y1+1]--;
        a[x1+1][y1+1]++;
    }
    for(i=1;i<=w;i++){
        for(j=1;j<=h;j++){
            a[i][j]+=a[i-1][j]+a[i][j-1]-a[i-1][j-1];
            printf("%d",a[i][j]%2);
        }
        printf("\n");
    }
    return 0;
}
