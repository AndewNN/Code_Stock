#include<bits/stdc++.h>
using namespace std;
int a[1100][1100],dp1[1100][1100],dp2[1100][1100];
int main()
{
    int n,m,i,j,k,mx=-1,cou,b,c;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            scanf("%d",&a[i][j]);
            if(i-2 >=0){
                dp2[i][j] += dp2[i-2][j];
            }
            if(j-2 >=0){
                dp1[i][j] += dp1[i][j-2];
            }
            dp1[i][j] += a[i][j];
            dp2[i][j] += a[i][j];
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cou = 0;
            if(i%2==1){
                b = max(1,)
            }else{

            }
        }
    }
    return 0;
}
