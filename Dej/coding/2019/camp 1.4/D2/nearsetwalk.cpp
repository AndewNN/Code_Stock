#include<bits/stdc++.h>
using namespace std;
struct A{
    int i,j,cou;
};
char a[1100][1100];
int mk[1100][1100],di[4]={1,-1,0,0},dj[4]={0,0,1,-1};
queue<A > qu;
int main()
{
    int ch,q,n,m,i,j,en,ej,k,b,c,mi,d;
    scanf("%d",&q);
    while(q--){
        mi = 1e7;
        scanf("%d %d",&n,&m);
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                scanf(" %c",&a[i][j]);
                if(a[i][j]=='A'){
                    qu.push({i,j,0});
                }else if(a[i][j]=='B'){
                    en=i,ej=j;
                }
            }
        }
        while(!qu.empty()){
            b= qu.front().i,c=qu.front().j,d=qu.front().cou;
            qu.pop();
            for(k=0;k<4;k++){
                i = b + di[k],j=c + dj[k];
                if(i < 1 || i > n || j < 1 || j > m){
                    continue;
                }
                if(a[i][j]=='#'){
                    continue;
                }
                if(mk[i][j]==1){
                    continue;
                }
                if(a[i][j]=='B'){
                    mi = min(mi,d+1);
                }
                mk[i][j]=1;
                qu.push({i,j,d+1});
            }
        }
        if(mi==1e7){
            printf("-1\n");
        }else{
            printf("%d\n",mi);
        }
        memset(mk,0,sizeof mk);
    }
    return 0;
}
/*
2
4 5
#A.#.
..#.B
.#..#
....#
4 5
#A.#.
..#.B
.#..#
..#.#
*/
