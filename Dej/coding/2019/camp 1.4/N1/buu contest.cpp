#include<bits/stdc++.h>
using namespace std;
priority_queue<long long> hp;
int main()
{
    long long q,k,i,sum=0,ans=0,a,b,c;
    scanf("%lld %lld",&q,&k);
    while(q--){
        scanf("%lld %lld",&a,&b);
        for(i=0;i<a;i++){
            scanf("%lld",&c);
            hp.push(c-sum);
        }
        for(i=0;i<b;i++){
            ans += sum + hp.top();
            hp.pop();
        }
        sum+=k;
    }
    printf("%lld\n",ans);
    return 0;
}
