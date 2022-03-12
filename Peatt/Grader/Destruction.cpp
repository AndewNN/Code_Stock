/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int dp[50010][2],a[50010],qs[50010];
int main()
{
    int n,k,m,i,j;
    scanf("%d %d %d",&n,&m,&k);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
        qs[i]=qs[i-1]+a[i];
    }



    return 0;
}
