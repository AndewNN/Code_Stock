#include<bits/stdc++.h>
using namespace std;
int n,ans[25],mk[25],pos[25][3],aa[25][3],nm,nk,nc,m,mi=1e9;
void play(int a,int b,int c,int l,int sum){
    if(a>=n && b>=n && c>=n){
        mi = min(mi,sum);
        return;
    }
    for(int i=1;i<=m;i++){
        if(mk[i])
            continue;
        mk[i] = 1;
        int ss = 0;
        for(int j=0;j<3;j++)
            ss += (pos[i][j]-pos[l][j])*(pos[i][j]-pos[l][j]);
        play(a+aa[i][0],b+aa[i][1],c+aa[i][2],i,sum+ss);
        mk[i] = 0;
    }
    return;
}
int main(){
    scanf("%d %d %d %d %d",&n,&pos[0][0],&pos[0][1],&pos[0][2],&m);
    for(int i=1;i<=m;i++){
        scanf("%d %d %d %d %d %d",&pos[i][0],&pos[i][1],&pos[i][2],&aa[i][0],&aa[i][1],&aa[i][2]);
    }
    play(0,0,0,0,0);
    printf("%d\n",mi);
}
/*

1
0 0 0
2
10 0 0
2 5 7
0 10 0
0 3 9

5
0 0 0
5
60 34 56
0 5 7
90 41 92
1 7 8
24 61 81
6 8 8
41 86 70
5 6 7
46 97 85
9 2 4

*/