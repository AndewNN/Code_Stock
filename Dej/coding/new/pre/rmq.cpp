/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[20][100100];
int main()
{
    int k,j,i,n,q,b,c;
    scanf("%d %d",&n,&q);
    for(i=0;i<n;i++){
        scanf("%d",&a[0][i]);
    }
    for(i=1;(1<<i)<=n;i++){
        for(j=0;j+(1<<i)<=n;j++){
            a[i][j] = max(a[i-1][j],a[i-1][j+(1<<(i-1))]);
        }
    }
    while(q--){
        scanf("%d %d",&c,&b);
        k = log2(b-c+1);
        printf("%d\n",max(a[k][c],a[k][b-(1<<k)+1]));
    }
    return 0;
}
