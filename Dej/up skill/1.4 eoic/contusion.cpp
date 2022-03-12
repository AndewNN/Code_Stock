#include<bits/stdc++.h>
using namespace std;
int a[10100][10100],di[4]={1,-1,0,0},dj[4]={0,0,-1,1};
queue<pair<int,int> > q;
int main()
{
    int n,x,y,b,i,j,ans=0,re=0,cou=1,an=1,k,ii,jj;
    scanf("%d %d %d %d",&n,&y,&b,&x);
    q.push({y,b});
    while(!q.empty() && an<=x){
        ii = q.front().first,jj=q.front().second;
        q.pop();
        if(cou == 0){
            ans++;
            cou = re;
            re = 0;
        }
        cou--;
        an++;
        for(k = 0;k<4;k++){
            i = ii + di[k],j = jj + dj[k];
            if(i < 1 || j < 1 || i > n || j > n){
                continue ;
            }
            if(a[i][j]){
                continue ;
            }
            re++;
            a[i][j]=1;
            q.push({i,j});
        }
    }
    printf("%d",ans);
    return 0;
}
