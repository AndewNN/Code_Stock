#include<bits/stdc++.h>
using namespace std;
char a[2100][2100];
int dis[2100][2100],di[4]={1,-1,0,0},dj[4]={0,0,1,-1};
queue<pair<int,int> > q;
int main()
{
    int n,m,i,j,ii,jj,k,a1=0,a2=0;
    scanf("%d %d",&n,&m);
    memset(dis,-1,sizeof dis);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf(" %c",&a[i][j]);
            if(a[i][j]=='X'){
                q.push({i,j});
                dis[i][j] = 0;
            }
        }
    }
    while(!q.empty()){
        i = q.front().first;
        j = q.front().second;
        q.pop();
        for(k=0;k<4;k++){
            ii = i +di[k];
            jj = j +dj[k];
            if(ii < 0 || jj < 0 || ii >= n || jj >=m){
                continue;
            }
            if(a[ii][jj]=='W'){
                continue;
            }
            if(dis[ii][jj]!=-1){
                continue;
            }
            q.push({ii,jj});
            dis[ii][jj] = dis[i][j]+1;
            if(a[ii][jj]=='A'){
                a1 += (2*dis[ii][jj]);
                a2++;
            }
        }
    }
    printf("%d %d\n",a2,a1);
    return 0;
}
