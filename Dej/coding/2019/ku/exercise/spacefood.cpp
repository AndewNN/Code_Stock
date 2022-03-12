#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,m,k,ch=1,ans=0,t=0,b;
    scanf("%d %d %d",&n,&m,&k);
    while(n--){
        scanf("%d",&a);
        b = a+t;
        if(b>=k){
            t = b-k;
        }else{
            if(b<m){
                ch = 0;
            }else{
                t = 0;
                ans++;
            }
        }
    }
    if(ch){
        printf("%d",ans);
    }else{
        printf("-1");
    }
    return 0;
}
