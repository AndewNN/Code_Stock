#include<bits/stdc++.h>
using namespace std;
int a[200][200],di[4]={1,0,-1,0},dj[4]={0,1,0,-1};
queue<int,int> q;
int main()
{
    int n,m,i,j,si,sj,ei,ej,ii,jj;
    scanf("%d %d %d %d %d %d",&n,&m,&si,&sj,&ei,&ej);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    return 0;
}
