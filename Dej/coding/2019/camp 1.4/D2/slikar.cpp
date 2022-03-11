#include<bits/stdc++.h>
using namespace std;
struct A{
    int i,j,ty,cou;
};
queue<A> qu;
char a[60][60];
int mk[60][60],di[4]={1,-1,0,0},dj[4]={0,0,1,-1};
int main()
{
    int si,sj,r,c,i,j,ei,ej,ii,jj,t,k,ch=1,ans,co;
    scanf("%d %d",&r,&c);
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            scanf(" %c",&a[i][j]);
            if(a[i][j]=='*'){
                qu.push({i,j,0,0});
            }
            if(a[i][j]=='S'){
                si = i;
                sj = j;
                mk[i][j]=1;
            }
            if(a[i][j]=='D'){
                ei = i;
                ej = j;
            }
        }
    }
    qu.push({si,sj,1,0});
    while(!qu.empty()){
        ii = qu.front().i,jj = qu.front().j,t = qu.front().ty,co = qu.front().cou;
        qu.pop();
        for(k=0;k<4;k++){
            i = ii + di[k],j = jj+dj[k];
            if(i < 1 || j < 1 || i > r || j > c){
                continue;
            }
            if(mk[i][j]){
                continue;
            }
            if(a[i][j]=='X'){
                continue;
            }
            if(a[i][j]=='D' && t == 0){
                continue;
            }
            if(a[i][j]=='D' && t == 1){
                ans = co;
                ch = 0;
            }
            mk[i][j] = 1;
            qu.push({i,j,t,co+1});
        }
    }
    if(ch){
        printf("KAKTUS\n");
    }else{
        printf("%d\n",ans+1);
    }
    return 0;
}
