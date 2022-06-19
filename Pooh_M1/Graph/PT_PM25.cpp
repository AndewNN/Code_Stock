#include<bits/stdc++.h>
using namespace std;
char a[1010][1010];
int q,r,c,dis[1010][1010],d,di[4]={-1,0,1,0},dj[4] = {0,-1,0,1},ans;
queue<pair<int,int > > que;
int main(){
    int x,y,i,j;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&r,&c);
        memset(dis,-1,sizeof dis);
        for(i=0;i<r;i++)
            for(j=0;j<c;j++){
                scanf(" %c",&a[i][j]);
                if(a[i][j] == 'E'){
                    que.push({i,j});
                    dis[i][j] = 0;
                }
            }
        d = -1; 
        while(!que.empty()){
            x = que.front().first;
            y = que.front().second;
            que.pop();
            for(int k=0;k<4;k++){
                
                int ii = x + di[k], jj = y + dj[k];
                if(ii<0 || jj<0 || ii >= r || jj >= c)
                    continue;
                if(a[ii][jj] == '#' || dis[ii][jj] != -1)
                    continue;
                dis[ii][jj] = dis[x][y] + 1;
                que.push({ii,jj});
                if(a[ii][jj] == 'S')
                    d = dis[ii][jj];
            }
        }
        ans = 0;
        for(i=0;i<r;i++)
            for(j=0;j<c;j++)
                if(dis[i][j] != -1 && dis[i][j] <= d && isdigit(a[i][j]))
                    ans += a[i][j] - '0';
        printf("%d\n",ans);
    }
}
/*

2
5 7
000E0#3
#0##0#0
050#0#0
4#0#0#0
0#0S000
1 4
SE69 

1
5 7
000E0#3
#0##0#0
050#0#0
4#0#0#0
0#0S000

*/