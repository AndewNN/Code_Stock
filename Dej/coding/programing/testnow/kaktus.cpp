/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
char a[60][60];
int mark[60][60],di[4]={1,0,-1,0},dj[4]={0,1,0,-1};
struct A{
    int i,j,t,cou;
};
queue<A> q;
int main()
{
    int i,j,r,c,si,sj,ei,ej,t,cou,k;
    bool ca = true;
    scanf("%d %d",&r,&c);
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            scanf(" %c",&a[i][j]);
            if(a[i][j]=='*'){
                q.push({i,j,1,0});
            }
            if(a[i][j]=='S'){
                si = i;
                sj = j;
            }
            if(a[i][j]=='D'){
                ei = i;
                ej = j;
            }
        }
    }
    q.push({si,sj,0,0});
    mark[si][sj] = 1;
    while(!q.empty()){
        si = q.front().i , sj = q.front().j ,t = q.front().t,cou = q.front().cou;
        q.pop();
        mark[si][sj] = 1;
        for(k=0;k<4;k++){
            i = si+di[k],j= sj+dj[k];
            if(t == 0 && i == ei && j == ej){
                ca = false;
                printf("%d\n",cou+1);
                return 0;
            }
            if(i==0 || i>r || j ==0 || j> c){
                continue;
            }
            if(a[i][j]== 'X'){
                continue;
            }
            if(a[i][j] == 'D' && t == 1){
                continue;
            }
            if(mark[i][j]){
                continue;
            }
            mark[i][j] = 1;
            q.push({i,j,t,cou+1});
        }
    }
    if(ca){
        printf("KAKTUS\n");
    }
    return 0;
}
