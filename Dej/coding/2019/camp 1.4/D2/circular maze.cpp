#include<bits/stdc++.h>
using namespace std;
struct A{
    int i,j;
    queue<pair<int,int> > dis;
};
char a[110][110];
int mk[110][110],di[4]={1,-1,0,0},dj[4]={0,0,1,-1};
queue<A> qu;
queue<pair<int,int> > t,re;
int main()
{
    int r,c,i,j,ei,ej,ii,jj,k;
    scanf("%d %d",&r,&c);
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            scanf(" %c",&a[i][j]);
            if(a[i][j]=='S'){
                qu.push({i,j,t});
            }
            if(a[i][j]=='E'){
                ei = i;
                ej = j;
            }
        }
    }
    while(!qu.empty()){
        ii = qu.front().i,jj = qu.front().j;
        t = qu.front().dis;
        re = qu.front().dis;
        qu.pop();
        for(k=0;k<4;k++){
            i = ii+di[k],j = jj+dj[k];
            if(i < 1){
                i = r;
            }
            if(i > r){
                i = 1;
            }
            if(j < 1){
                j = c;
            }
            if(j > c){
                j = 1;
            }
            if(mk[i][j]){
                continue;
            }
            if(a[i][j]=='#'){
                continue;
            }
            if(a[i][j]=='E'){
                while(!t.empty()){
                    a[t.front().first][t.front().second]='x';
                    t.pop();
                }
                for(i=1;i<=r;i++){
                    for(j=1;j<=c;j++){
                        printf("%c",a[i][j]);
                    }
                    printf("\n");
                }
                return 0;
            }
            mk[i][j]=1;
            t.push(make_pair(i,j));
            qu.push({i,j,t});
            t=re;
        }
        while(!t.empty()){
            t.pop();
        }
    }
    return 0;
}
/*
6 12
####.#..####
.S.#..#.#E##
#.#...#.#..#
..##..#..#..
.#.#.#.###.#
.........###
*/
