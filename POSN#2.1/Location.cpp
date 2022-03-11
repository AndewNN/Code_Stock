/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int a[1010][1010],qs[1010][1010];
int main()
{
    int n,m,i,j,k,mx=-1;
    scanf("%d %d %d",&n,&m,&k);
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            scanf("%d",&a[i][j]);
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            qs[i][j]=a[i][j]+qs[i-1][j]+qs[i][j-1]-qs[i-1][j-1];
    for(i=k;i<=n;i++)
        for(j=k;j<=m;j++)
            mx=max(mx,qs[i][j]-qs[i-k][j]-qs[i][j-k]+qs[i-k][j-k]);
    printf("%d\n",mx);


    return 0;
}
/*

5 10 2
5 9 2 9 1 2 8 9 1 6
9 1 3 9 8 4 2 1 5 7
2 7 9 3 8 5 2 7 6 8
1 6 2 1 7 7 1 9 4 1
8 5 2 3 9 8 5 6 3 3

*/
