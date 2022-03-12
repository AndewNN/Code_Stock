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
    int i,j,w;
    bool operator < (const A&o)const{
        return w>o.w;
    }
};
vector<A> g[1010][1010];
priority_queue<A> hp;
A t;
int dis[1010][1010],a[1010][1010],di[4]={-1,0,1,0},dj[4]={0,1,0,-1};
int main()
{
    int n,i,j,now,k,ii,jj,si,sj,ei,ej,ch=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]==0){
                if(!ch){
                    si=i,sj=j;
                    ch=1;
                }
                else
                    ei=i,ej=j;
            }
        }
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++){
            dis[i][j]=1e9;
            for(k=0;k<4;k++){
                ii=i+di[k],jj=j+dj[k];
                if(ii<1||jj<1||ii>n||jj>n)  continue;
                g[i][j].push_back({ii,jj,a[ii][jj]});
            }
        }
    dis[si][sj]=0,hp.push({si,sj,0});
    while(!hp.empty()){
        t=hp.top();
        hp.pop();
        for(auto x:g[t.i][t.j]){
            if(dis[x.i][x.j]>max(dis[t.i][t.j],a[x.i][x.j])){
                dis[x.i][x.j]=max(dis[t.i][t.j],a[x.i][x.j]);
                hp.push({x.i,x.j,dis[x.i][x.j]});
            }
        }
    }
    printf("%d",dis[ei][ej]);
    return 0;
}
/*

3
10 100 10
0 10 100
12 5 0

5
1 1 1 0 1
3 1 1 1 1
0 3 4 3 2
1 1 1 4 1
1 4 2 2 2

*/

