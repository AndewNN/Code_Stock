/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[22][22],di[4]={1,0,-1,0},dj[4]={0,1,0,-1},mark[22][22];
queue<pair<int,int>> q;
int main()
{
    int n,si,sj,i,j,ni,nj,k,fi,fj,ma = -1000;
    scanf("%d %d %d",&n,&sj,&si);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    q.push(make_pair(si,sj));
    while(!q.empty()){
        ni = q.front().first,nj=q.front().second;
        ma = max(a[ni][nj],ma);
        q.pop();
        mark[ni][nj]=1;
        for(k=0;k<4;k++){
            fi = ni+di[k],fj = nj + dj[k];
            if(fi<=0 || fi >n || fj <=0 || fj >n){
                continue;
            }
            if(a[fi][fj]==100){
                continue;
            }
            if(a[fi][fj] <= a[ni][nj]){
                continue;
            }
            if(mark[fi][fj] == 1){
                continue;
            }
            q.push(make_pair(fi,fj));
            mark[fi][fj] = 1;
        }
    }
    printf("%d\n",ma);
    return 0;
}
