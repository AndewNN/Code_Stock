#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    int ans,n,i,b;
    scanf("%d",&n);
    ans = n;
    for(i=1;i<=n;i++){
        scanf(" %c",&a);
        if(a=='#'){
            ans = min(ans,max(i-1,n-i));
        }
    }
    printf("%d",ans);
    return 0;
}
