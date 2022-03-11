#include<bits/stdc++.h>
using namespace std;
char a[110][110];
int dis[110][110];
queue<pair<int,int> > qu;
int main()
{
    int n,m,i,j,ii,jj;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            scanf(" %c",&a[i][j]);
        }
    }
    dis[1][1] = 1;
    qu.push({1,1});
    while(!qu.empty()){
        i = qu.front().first;
        j = qu.front().second;
        qu.pop();
        if(a[i][j]=='R' || a[i][j]=='B'){
            ii = i;
            jj = j +1;
            if(ii >=1 && jj >= 1 && ii <=n && jj <= m){
                if(dis[ii][jj]==dis[i][j]+1){
                    printf("%d\n%d %d",dis[ii][jj],ii,jj);
                    return 0;
                }else if(dis[ii][jj]==0){
                    dis[ii][jj] = dis[i][j]+1;
                    qu.push({ii,jj});
                }
            }
        }
        if(a[i][j]=='D' || a[i][j]=='B'){
            ii = i +1;
            jj = j;
            if(ii >=1 && jj >= 1 && ii <=n && jj <= m){
                if(dis[ii][jj]==dis[i][j]+1){
                    printf("%d\n%d %d",dis[ii][jj],ii,jj);
                    return 0;
                }else if(dis[ii][jj]==0){
                    dis[ii][jj] = dis[i][j]+1;
                    qu.push({ii,jj});
                }
            }
        }
        ii = i-1;
        jj = j;
        if((a[ii][jj]=='D' || a[ii][jj]=='B') && ii >=1 && jj >= 1 && ii <=n && jj <= m){
            if(dis[ii][jj]==dis[i][j]+1){
                    printf("%d\n%d %d",dis[ii][jj],ii,jj);
                    return 0;
                }else if(dis[ii][jj]==0){
                    dis[ii][jj] = dis[i][j]+1;
                    qu.push({ii,jj});
            }
        }
        ii = i;
        jj = j-1;
        if((a[ii][jj]=='R' || a[ii][jj]=='B') && ii >=1 && jj >= 1 && ii <=n && jj <= m){
            if(dis[ii][jj]==dis[i][j]+1){
                    printf("%d\n%d %d",dis[ii][jj],ii,jj);
                    return 0;
                }else if(dis[ii][jj]==0){
                    dis[ii][jj] = dis[i][j]+1;
                    qu.push({ii,jj});
            }
        }
    }
    return 0;
}
/*
4 4
B R D N
D R B D
R R R D
N N N N
3 4
B B B D
D N R B
R R R N
*/
