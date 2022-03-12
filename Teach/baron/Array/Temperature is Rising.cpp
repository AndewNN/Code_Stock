#include<bits/stdc++.h>
using namespace std;
int a[1010][1010],di[4]={1,0,-1,0},dj[4]={0,1,0,-1},ans=-10,n;
void play(int x,int y){
    ans=max(ans,a[x][y]);
    int i,ii,jj;
    for(i=0;i<4;i++){
        ii=x+dj[i];
        jj=y+di[i];
        if(ii<1||jj<1||ii>n||jj>n||a[x][y]>=a[ii][jj]||a[ii][jj]==100)
            continue;
        play(ii,jj);
    }
    return;
}
int main(){
    int i,j,k,m,x,y,ii,jj;
    scanf("%d %d %d",&n,&y,&x);
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            scanf("%d",&a[i][j]);
    play(x,y);
    printf("%d",ans);

    return 0;
}
/*

4
2 1
100 1 3 7
0 2 1 4
2 3 5 100
0 8 8 100

*/
