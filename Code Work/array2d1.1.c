#include<stdio.h>
int dis[310][310];
int main()
{
    int n,m,i,j,k,u,v,w,q;
    printf("Get values for the number of buildings(in which building numbers will be chased from 1-n) : ");
    scanf("%d",&n);
    printf("Get values for the number of walkways between buildings : ");
    scanf("%d",&m);
    printf("\n");
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            dis[i][j]=1e9;
    while(m--)
    {
        printf("Get 2 number instead walkway between 2 building : ");
        scanf("%d %d",&u,&v);
        printf("Get value for distance between these 2 building : ");
        scanf("%d",&w);
        printf("\n");
        dis[u][v]=w;
        dis[v][u]=w;
    }
    for(k=1; k<=n; k++)
        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++)
                if(dis[i][j]>dis[i][k]+dis[k][j])
                    dis[i][j]=dis[i][k]+dis[k][j];
    printf("Get value for the number of questions : ");
    scanf("%d",&q);
    printf("\n");
    while(q--)
    {
        printf("Get 2 number for lowest sun block you have to use for go between 2 building : ");
        scanf("%d %d",&u,&v);
        if(u==v)
            printf("This is same building\n\n");
        else if(u<=0||v<=0||u>n||v>n)
            printf("We don't have these building\n\n");
        else if(dis[u][v]==1e9)
            printf("This 2 building don't have way to go\n\n");
        else
            printf("Lowest sun block you have to use is %d ml.(5 ml. per meter)\n\n",dis[u][v]*5);
    }

    return 0;
}
/*

8 8
1 2 50
2 3 10
2 5 200
3 4 20
4 5 40
6 7 20
6 8 10
7 8 30

*/
