/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[1010][1010],row[1010][2],col[1010][2];
int main()
{
    int n,m,i,j,ans=1<<30,now;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
        row[i][0]=1<<30;
    for(j=0;j<m;j++)
        col[j][0]=1<<30;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j]<row[i][0])
                row[i][1]=row[i][0],row[i][0]=a[i][j];
            else if(a[i][j] < row[i][1])
                row[i][1]=a[i][j];
            if(a[i][j]<col[j][0])
                col[j][1]=col[j][0],col[j][0]=a[i][j];
            else if(a[i][j]<col[j][1])
                col[j][1]=a[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            now = a[i][j];
            if(a[i][j]==row[i][0]) now+=row[i][1];
            else                   now+=row[i][0];
            if(a[i][j]==col[j][0]) now+=col[j][1];
            else                   now+=col[j][0];
            ans = min(ans,now);
        }
    }
    printf("%d\n",ans);
    return 0;
}
