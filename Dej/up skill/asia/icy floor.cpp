#include<bits/stdc++.h>
using namespace std;
int a[1010][1010],mk[1010][1010],di[4]={1,-1,0,0},dj[4]={0,0,1,-1};
queue<pair<int,int> > q;
int main()
{
    int n,i,j,x,y,k,b,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]==1){
                mk[i][j]=1;
            }
        }
    }
    q.push(make_pair(1,1));
    while(!q.empty()){
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for(k=0;k<4;k++){
            b=x,c=y;
            while(b+di[k] >=1 && b+di[k] <= n && c+dj[k] >= 1 && c+dj[k]<= n&& mk[b][c]!=1){
                b +=di[k],c+=dj[k];
                a[b][c]= min()
            }
        }
    }
    return 0;
}
