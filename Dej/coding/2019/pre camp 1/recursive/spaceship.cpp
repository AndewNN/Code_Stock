/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int n,dis,mi=1e9,di[500][3],co[500][3],mk[500],q;
void play(int x,int y,int z,int cur,int p1,int p2,int p3){
    if(p1 <=0 && p2 <= 0 && p3 <=0){
        mi = min(mi,cur);
        return ;
    }
    int i,j;
    for(i=0;i<q;i++){
        if(!mk[i]){
            mk[i]=1;
            j = (x-di[i][0])*(x-di[i][0])+(y-di[i][1])*(y-di[i][1])+(z-di[i][2])*(z-di[i][2]);
            play(di[i][0],di[i][1],di[i][2],cur+j,p1-co[i][0],p2-co[i][1],p3-co[i][2]);
            mk[i]=0;
        }
    }
}
int main()
{
    int a,b,c,i;
    scanf("%d %d %d %d %d",&n,&a,&b,&c,&q);
    for(i=0;i<q;i++){
        scanf("%d %d %d %d %d %d",&di[i][0],&di[i][1],&di[i][2],&co[i][0],&co[i][1],&co[i][2]);
    }
    play(a,b,c,0,n,n,n);
    printf("%d\n",mi);
    return 0;
}
/*
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
