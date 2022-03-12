#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,ans=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&a,&b);
        if(a >= 100 && a <=750 && b>=80){
            ans++;
        }
    }
    printf("%d\n",ans);
    return 0;
}
