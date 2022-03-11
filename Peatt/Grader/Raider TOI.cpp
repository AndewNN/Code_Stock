/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int a[110][110],dis[110][110][2620];
int dj2[6]={0,1,1,1,0,-1},di[6]={-1,-1,0,1,1,0},dj1[6]={-1,0,1,0,-1,-1};
struct A
{
    int i,j,d;
};
A t;
queue<A> q;
int main()
{
    int n,m,i,j,ii,jj,d,mi=1e9;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    ii=(m-1)/2,jj=0;
    for(i=0;i<3;i++)
        if(a[ii-1+i][jj]==1){
            q.push({ii-1+i,jj,1});
            dis[ii-1+i][jj][1]=1;
        }
    while(!q.empty())
    {
        ii=q.front().i,jj=q.front().j,d=q.front().d;
        t=q.front();
      //  printf("%d %d\n",ii,jj);
        if(ii==(m-1)/2&&jj==n-1){
            printf("%d",d); break;}
        q.pop();
        for(i=0;i<6;i++){

            //printf("55\n");
            ii=t.i,jj=t.j;
            if(ii%2==1)
                jj+=dj1[i];
            else
                jj+=dj2[i];
            ii+=di[i];

            if(ii<0||jj<0||ii>m-1||jj>n-1)
                continue;
           // printf("%d %d %d",ii,jj,d);
            if(dis[ii][jj][(d+1)%2520])
                continue;
            if(a[ii][jj]==0)
                continue;
          //  printf("%d",66);
           // printf("%d\n",(d+1)%a[ii][jj]);
            if(((d+1)%a[ii][jj])!=0)
                continue;
            q.push({ii,jj,d+1});
            dis[ii][jj][(d+1)%2520]=1;

        }
    }
    return 0;
}
/*

5 4
1 1 3 8
0 1 1 0
1 6 5 7
1 3 2 3
2 5 2 0

3 3
1 3 1
1 3 7
1 1 1

*/
