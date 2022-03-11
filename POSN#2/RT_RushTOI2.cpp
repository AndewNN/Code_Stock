/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int dis[310][310];
int main()
{
    int n,m,i,j,k,u,v,w;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            dis[i][j]=1e9;
    while(m--)
    {
        scanf("%d %d %d",&u,&v,&w);
        dis[u][v]=w;
    }
    for(k=1;k<=n;k++)
        for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
                dis[i][j]=min(dis[i][j],dis[i][k]+dis[k][j]);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(dis[i][j]==1e9)
                printf("0 ");
            else
                printf("%d ",dis[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/*

4 5
1 2 10
2 3 10
1 3 15
4 4 10
4 1 10

*/
