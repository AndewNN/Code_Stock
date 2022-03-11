#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,ans = -10,a;
    scanf("%d %d",&n,&k);
    while(n--){
        scanf("%d",&a);
        if(a<=k){
            ans = max(a,ans);
        }
    }
    printf("%d",ans);
    return 0;
}
