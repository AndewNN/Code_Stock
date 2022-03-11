/*
    TASK: Intro01
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[1010][1010];
int main()
{
int r,i,j,c,ans=10000000;
scanf("%d %d",&r,&c);
for(i=0;i<=r+1;i++)
    for(j=0;j<=c+1;j++)
        a[i][j]=10000000;
for(i=1;i<=r;i++)
    for(j=1;j<=c;j++)
        scanf("%d",&a[i][j]);
for(i=r-1;i>=1;i--)
    for(j=1;j<=c;j++)
        a[i][j]+= min(a[i+1][j-1],min(a[i+1][j],a[i+1][j+1]));
for(j=1;j<=c;j++)
    if(a[1][j]<ans)
        ans = a[1][j];
printf("%d\n",ans);
    return 0;
}
