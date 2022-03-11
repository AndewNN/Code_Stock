#include<bits/stdc++.h>
using namespace std;
int a[1100][4];
int main()
{
    int sum=0,n,m,i,j,b,mx=-1;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            scanf("%d",&b);
            sum+=b;
            a[i][0]+=b;
            a[j][1]+=b;
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            scanf("%d",&b);
            a[i][2]+=b;
            a[j][3]+=b;
        }
    }
    for(i=1;i<=n;i++){
        b = sum - a[i][0] + a[i-1][2] + a[i+1][2];
        mx = max(mx,b);
    }
    for(i=1;i<=m;i++){
        b = sum - a[i][1] + a[i-1][3] + a[i+1][3];
        mx = max(mx,b);
    }
    printf("%d\n",mx);
    return 0;
}
