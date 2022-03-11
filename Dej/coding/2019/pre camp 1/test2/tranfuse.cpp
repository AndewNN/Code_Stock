/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
char a[10][10];
int mk[10][10],r,c,i,j,ma=-1,mi=1e9,cou=0,di[4]={1,0,-1,0},dj[4]={0,1,0,-1};
void play(int p,int b,int v){
    if(p == r && b == c){
        mi = min(mi,v);
        ma = max(ma,v);
        cou++;
        return ;
    }
    int k,ii,jj;
    for(k=0;k<4;k++){
        ii = p+ di[k],jj = b + dj[k];
        if(ii < 1 || jj<1 ||  ii > r || jj > c){
            continue;
        }
        if(a[ii][jj] == '#'){
            continue;
        }
        if(mk[ii][jj]){
            continue;
        }
        mk[ii][jj]=1;
        play(ii,jj,v+1);
        mk[ii][jj]=0;
    }
}
int main()
{
    printf("%d",1<<20);
    scanf("%d %d",&r,&c);
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            scanf(" %c",&a[i][j]);
        }
    }
    mk[1][1]=1;
    play(1,1,1);
    mk[1][1]=0;
    printf("%d %d %d",cou,ma,mi);
    return 0;
}
