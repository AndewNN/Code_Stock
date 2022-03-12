#include<bits/stdc++.h>
using namespace std;
long long a[2100],b[2100],n,m,ans,xx;
void p(long long state,long long sum,long long coa,long long cob){
    if(sum < 0 || coa > n || cob > m){
        return ;
    }
    if(state==n+m){
        ans++;
        if(ans==1000000007)
            ans=0;
        return;
    }
    if(sum+a[coa]>=0&&coa+1<=n)
    p(state+1,sum+a[coa],coa+1,cob);
    if(sum+b[cob]>=0&&cob+1<=m)
    p(state+1,sum+b[cob],coa,cob+1);
}
int main()
{
    long long i;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    scanf("%lld",&m);
    for(i=0;i<m;i++){
        scanf("%lld",&b[i]);
    }
    p(0,0,0,0);
    printf("%lld\n",ans);
    return 0;
}
/*
3
10
-7
-4
4
-8
6
8
-4
*/
