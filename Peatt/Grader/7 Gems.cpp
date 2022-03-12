/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
struct A
{
    int i,j,w,b;
};
int cb(int bit){
    int sum=0;
    for(int i=0;i<7;i++)
        if(bit&(1<<i))
            sum++;
    return sum;
}
queue<A> q;
A t;
char c[210][210];
int a[210][210],b[210][210],di[5]={-1,0,1,0,0},dj[5]={0,1,0,-1,0},dis[210][210][127][6];// i j cb w
int main()
{
    int n,m,i,j,cou=0,si,sj,ii,jj,k,ch=1,l;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++){
            scanf(" %c",&c[i][j]);
            if(c[i][j]=='#')  a[i][j]=-1;
            if(c[i][j]=='.')  a[i][j]=0;
            if(isalnum(c[i][j]))  a[i][j]=c[i][j]-'0';
            if(c[i][j]=='G')  a[i][j]=10,b[i][j]=1<<cou++;
            if(c[i][j]=='S')  si=i,sj=j,a[i][j]=0;
        }
    q.push({si,sj,1,0});
    dis[si][sj][0][1]=0;
    while(!q.empty()){
        t=q.front();
        q.pop();
        for(i=0;i<5;i++){
            ii=t.i+di[i],jj=t.j+dj[i];
            if(ii<1 || jj<1 || ii>n || jj>m || a[ii][jj]==-1 || dis[ii][jj][t.b|b[ii][jj]][(t.w+1)%6]!=0)  continue;
            if(a[ii][jj]==0||a[ii][jj]==10){
                q.push({ii,jj,t.w+1,t.b|b[ii][jj]});
                dis[ii][jj][t.b|b[ii][jj]][(t.w+1)%6]=1;
                if((t.b|b[ii][jj])==(1<<7)-1){
                    printf("%d\n",t.w);
                    return 0;
                }
            }
            if(a[ii][jj]>0&&a[ii][jj]<=6){
                if((t.w+1)%6==a[ii][jj]%6){
                    q.push({ii,jj,t.w+1,t.b});
                    dis[ii][jj][t.b][(t.w+1)%6]=1;
                }
                else if(cb(t.b)>=a[ii][jj]){
                    q.push({ii,jj,t.w+1,t.b});
                    dis[ii][jj][t.b][(t.w+1)%6]=1;
                }
               /* else{
                    q.push({ii,jj,t.w+((a[ii][jj]+6)-t.w)%6,t.b});
                    dis[ii][jj][(t.w+((a[ii][jj]+6)-t.w)%6)%6][t.b]=t.w+((a[ii][jj]+6)-t.w)%6;
                }*/
            }
        }

    }
    printf("-1\n");
    return 0;
}
/*

2 12
S##..G......
....GGGGG66G

2 7
S##.GGG
GG6.GG.

2 6
S##GGG
.6GGGG

2 12
S####.......
...61GGGGGGG

4 12
S###########
56..GGGGGGG.
.###########
............

3 5
S.GG.


*/
