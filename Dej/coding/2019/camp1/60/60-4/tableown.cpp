#include<bits/stdc++.h>
using namespace std;
int a[600][600];
int main()
{
    int n,m,i,j,ans=100000000;
    for(i=0;i<=550;i++){
        for(j=0;j<=550;j++){
            a[i][j] = 100000000;
        }
    }
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=n-1;i>=1;i--){
        for(j=1;j<=m;j++){
            a[i][j] += min(a[i+1][j],min(a[i+1][j-1],a[i+1][j+1]));
        }
    }
    for(i=1;i<=m;i++){
        ans = min(a[1][i],ans);
    }
    printf("%d\n",ans);
    return 0;
}
/*
5 6
3 6 1 7 2 3
4 7 9 5 2 1
3 3 3 9 9 8
7 5 7 5 8 9
2 4 1 3 7 1
*/
