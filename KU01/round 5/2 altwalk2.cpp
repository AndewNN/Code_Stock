/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int ma[35][35],n,mx=0,di[4]={-1,0,1,0},dj[4]={0,1,0,-1};
char a[35][35];
struct A{
    int i,j;

};
A t;
queue<A> q;
int main()
{
    int i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf(" %s",a[i]);
    if(a[0][0] == '.')
        q.push({0,0});
    else
        q.push({0,0});
    ma[0][0]=1;
    while(!q.empty()){
        t=q.front();
        q.pop();
        for(int k=0;k<4;k++){
            int ii=t.i+di[k],jj=t.j+dj[k];
            if(ii>=0&&ii<n&&jj>=0&&jj<n){
                if(a[t.i][t.j]!=a[ii][jj]&&!ma[ii][jj]){
                    ma[ii][jj]=1;
                    q.push({ii,jj});
                }
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            if(ma[i][j])
                mx++;
   }
   printf("%d\n",mx);
}
/*

5
.#..#
#.#.#
##..#
..##.
#.#.#

for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf("%c",a[i][j]);
        printf("\n");
    }
*/
