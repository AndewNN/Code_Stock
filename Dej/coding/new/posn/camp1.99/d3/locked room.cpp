/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int i,j,w,state;
    bool operator < (const A&o) const{
        return w>o.w;
    }
};
priority_queue<A> h;
int dis[100][100][2],a[100][100],di[4]={1,-1,0,0},dj[4]={0,0,1,-1};
int main()
{
    int i,j,n,k,sti,stj,eni,enj,ii,jj,noww,nowstate,nextstate;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            scanf("%d",&a[i][j]);
    scanf("%d %d %d %d",&sti,&stj,&eni,&enj);
    h.push({sti,stj,0});
    memset(dis,-1,sizeof dis);
    while(!h.empty()){
        i=h.top().i,j=h.top().j,noww=h.top().w,nowstate=h.top().state;
        h.pop();
        if(i==eni&&j==enj&&nowstate==1){
            printf("%d\n",noww); return 0;
        }
        for(k=0;k<4;k++){
            ii=i+di[k],jj=j+dj[k];
            nextstate = nowstate;
            if(ii<1||jj<1||ii>n||jj>n) continue;
            if(a[ii][jj]<0) nextstate^=1;
            if(dis[ii][jj][nextstate]!=-1) continue;
            dis[ii][jj][nextstate]=noww+abs(a[ii][jj]);
            h.push({ii,jj,dis[ii][jj][nextstate],nextstate});
        }
    }
    return 0;
}
