#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,r,x,y,ans=0;
    scanf("%d %d %d %d",&n,&a,&b,&r);
    while(n--){
        scanf("%d %d",&x,&y);
        if(r*r>=(a-x)*(a-x)+(b-y)*(b-y)){
            ans++;
        }
    }
    printf("%d",ans);
    return 0;
}
