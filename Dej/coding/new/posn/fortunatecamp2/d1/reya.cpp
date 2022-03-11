/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
char a[110];
int main()
{
    long long ans,last,i,q,m,n;
    scanf("%lld",&q);
    while(q--){
        ans = 1;
        last = 1;
        scanf("%s %lld",a,&m);
        if(strlen(a)>6){
            n = m-1;
        }
        else{
            sscanf(a,"%lld",&n);
        }
        if(m==1){
            printf("0\n");
        }else if(n==0){
            printf("1\n");
        }else{
        for(i=1;i<=n;i++){
            last *= i;
            ans += last;
            ans%=m , last%=m;
        }
        printf("%lld",ans);
        }
    }
    return 0;
}
