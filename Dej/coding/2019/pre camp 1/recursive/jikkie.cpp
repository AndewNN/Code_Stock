/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int mk[30][30][30],ans[30];
int x,y,z;
void play(int i,int j,int k){
    if(i<0||i>x||j<0||j>y||k<0||k>z) return ;
    if(mk[i][j][k]) return ;
    if(i==0)    ans[k]=1;
    mk[i][j][k] = 1;
    play(0,i+j,k);
    play(i-(y-j),y,k);
    play(0,j,k+i);
    play(i-(z-k),y,z);
    play(i,0,k+j);
    play(i,j-(z-k),z);
    play(i+j,0,k);
    play(x,j-(x-i),k);
    play(i,j+k,0);
    play(i,y,k-(y-j));
    play(i+k,j,0);
    play(x,j,k-(x-i));
}
int main()
{
    int h,g;
    scanf("%d %d %d",&x,&y,&z);
    play(0,0,z);
    for(h=0;h<=z;h++){
        if(ans[h]){
            printf("%d ",h);
        }
    }
    return 0;
}
