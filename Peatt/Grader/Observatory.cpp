/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
long long qs[2010][2010],qsl[2010][2010],qsr[2010][2010],a[2010][2010];
int main()
{
    long long n,m,k,i,j,ma=-2e10;
    scanf("%lld %lld %lld",&m,&n,&k);
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
            scanf("%lld",&a[i][j]);
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
            qs[i][j]=a[i][j]+qs[i-1][j]+qs[i][j-1]-qs[i-1][j-1];
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
            qsl[i][j]=qsl[i-1][j-1]+qs[i][j]-qs[i-1][j];
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
            qsr[i][j]=qsr[i-1][j+1]+qs[i][n]-qs[i][j-1]-qs[i-1][n]+qs[i-1][j-1];
    for(i=k;i<=m;i++)
        for(j=k;j<=n;j++)
            ma=max(ma,qsl[i][j]-qsl[i-k][j-k]-qs[i][j-k]+qs[i-k][j-k]);
    for(i=k;i<=m;i++)
        for(j=1;j<=n-k+1;j++)
            ma=max(ma,qsr[i][j]-qsr[i-k][j+k]-qs[i][n]+qs[i][j+k-1]+qs[i-k][n]-qs[i-k][j+k-1]);
    printf("%lld",ma);
    return 0;
}
/*

4 5 3
1 2 -1 -4 -20
-8 -3 4 2 1
3 8 10 1 3
-4 -1 1 7 -6

*/

