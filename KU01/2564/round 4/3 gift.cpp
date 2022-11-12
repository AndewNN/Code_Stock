/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int x,y;
};
queue<A> q;
A w[1010],t;
int a[35][35],ma[35][35],di[4]={-1,0,1,0},dj[4]={0,1,0,-1};
int main()
{
    int n,m,i,j,ii,jj,sx,sy,cou=0,ch=0,ans=0;
    char o;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++){
            scanf(" %c",&o);
            if(o=='A')
                sx=i,sy=j;
            if(o=='#')
                a[i][j]=-1;
            if(o=='*')
                a[i][j]=10;
            if(o=='W')
                w[cou].x=i,w[cou++].y=j,a[i][j]=100;
    }
    q.push({sx,sy});
    while(!q.empty()){
        t=q.front();
        q.pop();
        for(int k=0;k<4;k++){
            ii=t.x+di[k],jj=t.y+dj[k];
            if(ii<1||jj<1||ii>n||jj>m)
                continue;
            if(a[ii][jj]==-1||ma[ii][jj])
                continue;
            if(a[ii][jj]==10)
                a[ii][jj]=0,ans++;
            if(a[ii][jj]==100&&ch==0){
                for(i=0;i<cou;i++){
                    q.push({w[i].x,w[i].y});
                }
                ch=1;
            }
            ma[ii][jj]=1;
            q.push({ii,jj});

        }
    }
    printf("%d\n",ans);
    return 0;
}
/*

5 7
A*.#...
..#..*#
.*####.
##..#..
.#.*#..

5 7
A*.#...
.W#..*#
.*####.
###W#.W
W#.*#..


*/
