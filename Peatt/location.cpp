/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int a[1010][1010],ans[1010][1010];
int main()
{
    int m,n,i,j,k,now,ma=-1;
    scanf("%d %d %d",&m,&n,&k);
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
        {
            scanf("%d",&now);
            a[i][j]=a[i-1][j]+a[i][j-1]-a[i-1][j-1]+now;
        }
    for(i=k;i<=m;i++)
        for(j=k;j<=n;j++)
            ans[i][j]=a[i][j]-a[i-k][j]-a[i][j-k]+a[i-k][j-k];
    for(i=k;i<=m;i++)
        for(j=k;j<=n;j++)
            ma=max(ma,ans[i][j]);
    printf("%d",ma);
    return 0;
}
