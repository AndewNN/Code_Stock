/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
queue<pair<int,int> > q;
int n,i,j,si,sj,ma=-100,ii,jj,di[4]={1,0,-1,0},dj[4]={0,1,0,-1},k;
int a[30][30],mk[30][30];
int main()
{
    scanf("%d %d %d",&n,&sj,&si);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    q.push(make_pair(si,sj));
    mk[si][sj]=1;
    while(!q.empty()){
        j = q.front().second,i=q.front().first;
        q.pop();
        ma=max(ma,a[i][j]);
        mk[i][j]=1;
        for(k=0;k<4;k++){
            ii = i+di[k],jj=j+dj[k];
            if(ii<1 || jj <1 || ii> n || jj>n){
                continue;
            }
            if(mk[ii][jj]){
                continue;
            }
            if(a[ii][jj]<=a[i][j]){
                continue;
            }
            if(a[ii][jj] == 100){
                continue;
            }
            q.push(make_pair(ii,jj));
        }
    }
    printf("%d\n",ma);
    return 0;
}
