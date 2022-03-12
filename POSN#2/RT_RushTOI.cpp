 /*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int d[310][310];
int main()
{
    int n,m,i,j,k;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            d[i][j]=1e9;
    while(m--)
    {
        scanf("%d %d %d",&i,&j,&k);
        d[i][j]=min(d[i][j],k);
    }
    for(k=1;k<=n;k++)
        for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
                d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
            printf((d[i][j]!=1e9)?"%d ":"0 ",d[i][j]);
        printf("\n");
    }
    return 0;
}

