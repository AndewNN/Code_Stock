#include<bits/stdc++.h>
using namespace std;
int b[110][110];
int main()
{
    int t,q,n,m,i,j,a,ch,mx;
    scanf("%d",&q);
    for(t=1;t<=q;t++){
        scanf("%d %d",&n,&m);
        ch = 1;
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                scanf("%d",&b[i][j]);
            }
        }
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                if(b[i][j]<b[1][j] && b[i][j]<b[n][j] &&b[i][j]<b[i][1] &&b[i][j]<b[i][m]){
                    ch = 0;
                }
            }
        }
        if(ch) printf("Case #%d: YES\n",t);
        else   printf("Case #%d: NO\n",t);
    }
    return 0;
}
