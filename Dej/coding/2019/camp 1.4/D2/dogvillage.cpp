#include<bits/stdc++.h>
using namespace std;
int a[1100][1100],di[4]={1,-1,0,0},dj[4]={0,0,1,-1},mk[1100][1100];
queue<pair<int,int> > qu;
int main()
{
    int n,m,i,j,cou=0,re=0,da=1,ii,jj,k;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]==0){
                cou++;
                qu.push({i,j});
                mk[i][j]=1;
            }
        }
    }
    while(!qu.empty()){
        ii = qu.front().first,jj=qu.front().second;
        qu.pop();
        if(cou == 0){
            cou = re;
            re = 0;
            da+=1;
        }else{
            for(k=0;k<4;k++){
                i = ii+di[k],j = jj + dj[k];
                if(i < 1 || i > n || j < 1 || j > m){
                    continue;
                }
                if(a[i][j]<=da){
                    continue;
                }
                if(mk[i][j]){
                    continue;
                }
                mk[i][j]=1;
                a[i][j] = 0;
                qu.push({i,j});
                re+=1;
            }
            cou--;
        }
    }
    cou=0;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(a[i][j]>0){
                cou++;
            }
        }
    }
    printf("%d\n",cou);
    return 0;
}
