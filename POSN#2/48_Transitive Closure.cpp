/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int dis[510][510];
int main()
{
    int i,j,k,n,u,v,w;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            dis[i][j]=1e9;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            scanf("%d",&w);
            if(w)
                dis[i][j]=w;
        }
    for(k=0;k<n;k++)
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                dis[i][j]=min(dis[i][j],dis[i][k]+dis[k][j]);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(dis[i][j]==1e9)
                printf("0 ");
            else
                printf("1 ");
        }
        printf("\n");
    }


    return 0;
}
/*

4
0 0 1 0
1 0 0 1
0 0 0 0
0 1 0 0

*/
