/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[120][120],b[120][120],di[4]={-1,0,1,0},dj[4]={0,1,0,-1};
int n,m,q,i,j;
void play(int c,int d){
    if(c==0){
        printf("N\n");
    }else if(c>n){
        printf("S\n");
    }else if(d==0){
        printf("W\n");
    }else if(d>m){
        printf("E\n");
    }else{
    int x,y;
    x = c+di[a[c][d]-1],y = d + dj[a[c][d]-1];
    if(b[x][y]==1){
        printf("NO\n");
    }else{
        b[x][y]=1;
        play(x,y);
    }
    }
}
int main()
{
    scanf("%d %d %d",&m,&n,&q);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    while(q--){
        scanf("%d %d",&j,&i);
        b[i][j]=1;
        play(i,j);
        memset(b,0,sizeof b);
    }
    return 0;
}
