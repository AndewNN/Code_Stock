/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int dp[100100];
int main()
{
	int n,m,q,s,e,v,b,i;
	scanf("%d %d %d",&n,&m,&q);
	while(m--){
        scanf("%d %d %d",&s,&e,&v);
        dp[s]+=v,dp[e+1]-=v;
	}
	for(i=0;i<=n;i++){
        dp[i]+=dp[i-1];
	}
	while(q--){
        scanf("%d",&b);
        printf("%d\n",dp[b]);
	}
    return 0;
}
