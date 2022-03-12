#include<bits/stdc++.h>
using namespace std;
struct A{
    int i,j,w;
    bool operator < (const A&o) const{
        return w > o.w;
    }
};
int di[8]={1,-1,0,0,1,-1,1,-1},dj[8]={0,0,1,-1,1,1,-1,-1},dis[110][110];
vector<A> g[110][110];
priority_queue<A> hp;
char a[110][110];
int main()
{
    int q,r,c,i,j,ei,ej,si,sj,mn=-1,k,ii,jj,b,w;
    scanf("%d",&q);
    while(q--){
        mn = -1;
        scanf("%d %d",&r,&c);
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                dis[i][j] = 1<<30;
                scanf(" %c",&a[i][j]);
                if(a[i][j]!='#' && a[i][j]-'0'>mn){
                    mn = a[i][j]-'0';
                    ei = i;
                    ej = j;
                }
            }
        }
        scanf("%d %d",&si,&sj);
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if(a[i][j]!='#'){
                for(k=0;k<8;k++){
                    ii = i+di[k];
                    jj = j+dj[k];
                    if(ii < 0 || jj < 0 || ii >= r || jj >= c){
                        continue;
                    }
                    if(a[ii][jj]=='#'){
                        continue;
                    }
                    b = abs((a[i][j]-'0')-(a[ii][jj]-'0'))+1;
                    g[i][j].push_back({ii,jj,b*b});
                }
            }
            }
        }
        dis[si][sj] = 0;
        hp.push({si,sj,0});
        while(!hp.empty()){
            i = hp.top().i;
            j = hp.top().j;
            w = hp.top().w;
            hp.pop();
            for(auto x : g[i][j]){
                if(dis[i][j]+x.w<dis[x.i][x.j]){
                    dis[x.i][x.j] = dis[i][j] + x.w;
                    hp.push({x.i,x.j,dis[x.i][x.j]});
                }
            }
        }
        if(dis[ei][ej]==1<<30){
            printf("NO\n");
        }else{
            printf("%d\n",dis[ei][ej]);
        }
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                g[i][j].clear();
                dis[i][j] = 0;
            }
        }
        while(!hp.empty()){
            hp.pop();
        }
    }
    return 0;
}
