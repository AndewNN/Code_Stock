
/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int a[33][33],di[4]= {0,0,1,-1},dj[4]= {1,-1,0,0},dis[33][33],n,m,q,r,c,t,si,sj,ei,ej,ma,cou;
void play(int i,int j,int state,int p)
{
    if(state==t&&i==ei&&j==ej){
        ma=max(ma,p);
        return;
    }
    //printf("%d %d %d %d\n",i,j,state,p);
    for(int k=0; k<4; k++)
    {
        cou++;
        int ii=i+di[k],jj=j+dj[k];
        if(!a[ii][jj]||ii<1||jj<1||ii>r||jj>c)
            continue;
        if(dis[ii][jj]&&p>=dis[ii][jj])
        {
            if(state+1<=t)
            {
                int tmp=dis[ii][jj];
                dis[ii][jj]=p;
                play(ii,jj,state+1,p);
                dis[ii][jj]=tmp;
            }
        }
        if(!dis[ii][jj])
        {
            if(state+1<=t)
            {
                dis[ii][jj]=p+1;
                play(ii,jj,state+1,p+1);
                dis[ii][jj]=0;
            }
        }
    }
}
int main()
{
    int i,j;
    char o;
    scanf("%d",&q);
    while(q--)
    {
        ma=-1;
        scanf("%d %d %d",&r,&c,&t);
        for(i=1; i<=r; i++)
            for(j=1; j<=c; j++)
            {
                scanf(" %c",&o);
                if(o=='.')
                    a[i][j]=1;
                else
                    a[i][j]=0;
            }
        scanf("%d %d %d %d",&si,&sj,&ei,&ej);
        dis[si][sj]=1;
        play(si,sj,0,1);
        dis[si][sj]=0;
        printf("%d\n",ma);
    }
    return 0;
}
/*

3
5 8 9
#..#..#.
.#...##.
##.##..#
...##.##
##.#..##
4 3 2 4

1
4 5 100
.....
.####
...#.
#.##.
3 3 1 3


3 5 2
.....
.####
.....
3 3 1 3

*/
