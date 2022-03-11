#include<bits/stdc++.h>
using namespace std;
int di[8]={1,0,-1,0,1,1,-1,-1},dj[8]={0,-1,0,1,-1,1,1,-1};
char a[2100][2100];
queue<pair<int,int> > q;
int main()
{
    int n,m,i,j,ans=0,c,d,k,ii,jj;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            scanf(" %c",&a[i][j]);
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(a[i][j]-'0'==1){
                a[i][j] = '0';
                q.push({i,j});
                ans++;
                while(!q.empty()){
                    c = q.front().first;
                    d = q.front().second;
                    q.pop();
                    for(k=0;k<8;k++){
                        ii = c+di[k];
                        jj = d+dj[k];
                        if(ii < 1 || jj < 1 || ii > n || jj > m){
                            continue;
                        }
                        if(a[ii][jj]-'0'==0){
                            continue;
                        }
                        a[ii][jj] = '0';
                        q.push({ii,jj});
                    }
                }
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}
