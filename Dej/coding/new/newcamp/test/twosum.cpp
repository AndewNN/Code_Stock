/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
long long d[1000100];
int main()
{
    long long q,n,i,a,b,ans;
    scanf("%lld",&q);
    while(q--){
        memset(d,0,sizeof d);
        d[0]++;
        ans=0;
        b=0;
        scanf("%lld",&n);
        for(i=0;i<n;i++){
            scanf("%lld",&a);
            b+=a;
            if(b<0){
                d[(-b)-1]++;
            }else{
                d[b]++;
            }
        }
        for(i=0;i<=1000000;i++){
            if(d[i]>1){
                ans+=(d[i]*(d[i]-1))/2;
            }
        }
        printf("%lld",ans);
    }
return 0;
}
