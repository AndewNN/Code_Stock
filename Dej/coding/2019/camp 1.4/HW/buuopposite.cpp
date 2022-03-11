#include<bits/stdc++.h>
using namespace std;
struct A{
    int i,j,ii,jj,w;
};
queue< A > qu;
char a[35][35];
int dis[35][35][35][35],di[4]={1,-1,0,0},dj[4]={0,0,1,-1},mk[35][35][35][35];
int main()
{
    int q,r,c,i,j,si,sj,ei,ej,k,w,ii,jj,ti,tj,an,ans;
    scanf("%d",&q);
    while(q--){
        an  = 1000;
        ans = 1000;
        scanf("%d %d",&r,&c);
        for(i=1;i<=r;i++){
            for(j=1;j<=c;j++){
                scanf(" %c",&a[i][j]);
                if(a[i][j]=='A'){
                    si = i;
                    sj = j;
                }
                if(a[i][j]=='B'){
                    ei = i;
                    ej = j;
                }
            }
        }
        for(i=1;i<=r;i++){
            for(j=1;j<=c;j++){
                qu.push({i,j,i,j,0});
                while(!qu.empty()){
                    ti = qu.front().i;
                    tj = qu.front().j;
                    w = qu.front().w;
                    qu.pop();
                    for(k=0;k<4;k++){
                        ii = ti + di[k];
                        jj = tj + dj[k];
                        if(ii < 1 || ii > r || jj < 1 || jj > c) continue;
                        if(a[ii][jj] == '#' || dis[i][j][ii][jj]!=0) continue;
                        dis[i][j][ii][jj] = w+1;
                        qu.push({ii,jj,ii,jj,w+1});
                    }
                }
            }
        }
        for(i=1;i<=r;i++){
            for(j=1;j<=c;j++){
                dis[i][j][i][j]=0;
            }
        }
        qu.push({si,sj,ei,ej,0});
        while(!qu.empty()){
            si = qu.front().i;
            sj = qu.front().j;
            ei = qu.front().ii;
            ej = qu.front().jj;
            w = qu.front().w;
            qu.pop();
            if(dis[si][sj][ei][ej] < an){
                an = dis[si][sj][ei][ej];
                ans = w;
        }
            for(k=0;k<4;k++){
                i = si + di[k];
                j = sj + dj[k];
                ii = ei - di[k];
                jj = ej - dj[k];
                if(i<1 || i>r || j < 1 || j > c){
                    i = si;
                    j = sj;
                }
                if(a[i][j]=='#'){
                    i = si;
                    j = sj;
                }
                if(ii<1 || ii>r || jj < 1 || jj > c){
                    ii = ei;
                    jj = ej;
                }
                if(a[ii][jj]=='#'){
                    ii = ei;
                    jj = ej;
                }
                if(mk[i][j][ii][jj]) continue;
                mk[i][j][ii][jj]=1;
                qu.push({i,j,ii,jj,w+1});
            }
        }
        if(an == 0 && ans == 1){
            printf("-1 0\n");
        }else{
            printf("%d %d\n",an,ans);
        }
        memset(dis,0,sizeof dis);
        memset(mk,0,sizeof mk);
    }
    return 0;
}
