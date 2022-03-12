/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int dp[1000100],a[1000100];
int main()
{
	int n,q,i,s,e;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
	}
	for(i=2;i<=n;i++){
        dp[i]=dp[i-1];
        if(a[i]>a[i-1]){
            dp[i]+=(a[i]-a[i-1]);
        }
	}
	scanf("%d",&q);
	while(q--){
        scanf("%d %d",&s,&e);
        printf("%d\n",dp[e]-dp[s]);
	}
    return 0;
}
