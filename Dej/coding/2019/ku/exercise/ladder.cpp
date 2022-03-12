#include<bits/stdc++.h>
using namespace std;
int a[1100];
int main()
{
    int n,m,i,ans=0,b;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    while(m--){
        scanf("%d",&b);
        ans = ans + b + a[ans+b];
        ans = max(0,ans);
        ans = min(ans,n);
    }
    printf("%d\n",ans);
    return 0;
}
