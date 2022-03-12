#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,ans=0,n;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&a,&b);
        if(a <= 400 && b >= 150 && b<= 200){
            ans++;
        }
    }
    printf("%d\n",ans);
    return 0;
}
