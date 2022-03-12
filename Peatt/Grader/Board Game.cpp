/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int i,j,w,b;
};
queue<A> q;
A t;
char a[510][510];
int dis[510][510][10],di[4]={-1,0,1,0},dj[4]={0,1,0,-1},bb[510][510];//j-001 b-010 p-100
int main()
{
    int n,m,i,j,si,sj,ei,ej,k,ii,jj,bi,mi=1e9;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++){
            scanf(" %c",&a[i][j]);
            if(a[i][j]=='S')
                si=i,sj=j;
            if(a[i][j]=='E')
                ei=i,ej=j;
            if(a[i][j]=='j')
                bb[i][j]=1;
            if(a[i][j]=='b')
                bb[i][j]=2;
            if(a[i][j]=='p')
                bb[i][j]=4;
    }
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            for(k=0;k<=8;k++)
                dis[i][j][k]=-1;
    dis[si][sj][0]=0;q.push({si,sj,0,0});
    while(!q.empty()){
        t=q.front();
        q.pop();
        if(t.i==ei&&t.j==ej){
            printf("%d\n",t.w);
            return 0;
        }
        for(i=0;i<4;i++){
            ii=t.i+di[i];
            jj=t.j+dj[i];
            bi=t.b|bb[ii][jj];
            if(ii<1||jj<1||ii>n||jj>m||dis[ii][jj][bi]!=-1)  continue;
            if((a[ii][jj]=='J' && (bi&1)==0)||(a[ii][jj]=='B' && (bi&2)==0)||(a[ii][jj]=='P' && (bi&4)==0)||a[ii][jj]=='#')    continue;
            dis[ii][jj][bi]=dis[t.i][t.j][t.b]+1;
            q.push({ii,jj,dis[ii][jj][bi],bi});
        }
    }
    printf("-1\n");
    return 0;
}
/*

2 5
S.J.b
.jB.E

*/
