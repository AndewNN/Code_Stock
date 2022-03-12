/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int i,j,k,l,w;
};
queue< A > q;
int dis[35][35][35][35],mark[35][35][35][35];
int di[4]={0,0,1,-1},dj[4]={1,-1,0,0},di2[4]={0,0,-1,1},dj2[4]={-1,1,0,0};
char a[35][35];
int main()
{
	int k,Q,r,c,i,j,nowi,nowj,sti,stj,eni,enj,nexti,nextj,mi,ans,nowk,nowl,nextk,nextl,nowdis;
	scanf("%d",&Q);
	while(Q--){
        scanf("%d %d",&r,&c);
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                scanf(" %c",&a[i][j]);
                if(a[i][j]=='A')    sti=i,stj=j;
                if(a[i][j]=='B')    eni=i,enj=j;
            }
        }
        memset(dis,-1,sizeof dis);
        memset(mark,0,sizeof mark);
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if(a[i][j]=='#') continue;
                q.push({i,j,i,j,0});
                dis[i][j][i][j]=0;
                while(!q.empty()){
                    nowi=q.front().i,nowj=q.front().j;
                    q.pop();
                    for(k=0;k<4;k++){
                        nexti = nowi+di[k],nextj = nowj+dj[k];
                        if(nexti<0||nextj<0||nexti>=r||nextj>=c) continue;
                        if(a[nexti][nextj]=='#') continue;
                        if(dis[i][j][nexti][nextj]!=-1) continue;
                        dis[i][j][nexti][nextj] = dis[i][j][nowi][nowj]+1;
                        q.push({nexti,nextj,nexti,nextj,dis[i][j][nexti][nextj]});
                    }
                }
            }
        }
        mi=1<<30,ans=0;
        q.push({sti,stj,eni,enj,0});
        while(!q.empty()){
            nowi=q.front().i,nowj=q.front().j,nowk=q.front().k,nowl=q.front().l;
            nowdis=q.front().w;
            q.pop();
            if(dis[nowi][nowj][nowk][nowl]<mi)
                mi=dis[nowi][nowj][nowk][nowl],ans=nowdis;
            for(k=0;k<4;k++){
                nexti = nowi+di[k],nextj = nowj+dj[k],nextk=nowk+di2[k],nextl = nowl+dj2[k];
                if(nexti<0||nextj<0||nexti>=r||nextj>=c||a[nexti][nextj]=='#')
                    nexti=nowi,nextj=nowj;
                if(nextk<0||nextl<0||nextk>=r||nextl>=c||a[nextk][nextl]=='#')
                    nextk=nowk,nextl=nowl;
                if(mark[nexti][nextj][nextk][nextl]) continue;
                if(dis[nexti][nextj][nextk][nextl] == -1) continue;
                mark[nexti][nextj][nextk][nextl] =1;
                q.push({nexti,nextj,nextk,nextl,nowdis+1});
            }
        }
        if(dis[sti][stj][eni][enj]==-1) printf("-1 0\n");
        else
        printf("%d %d\n",mi,ans);
	}
    return 0;
}
/*
4
2 5
A . . . .
. . . . B
1 5
A . # . B
1 5
A . . . B
3 5
A . . . .
# # # . .
# # # . B
*/
