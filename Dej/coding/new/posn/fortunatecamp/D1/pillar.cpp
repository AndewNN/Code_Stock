/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int up[100100],down[100100],reup[100100],redown[100100],dp[100100];
int main()
{
	int q,n,i,ansi,mx,now;
	scanf("%d",&q);
	while(q--){
        scanf("%d %d",&n,&dp[1]);
        up[1] = 1;
        down[1] = 1;
        reup[n] = 1;
        redown[n] = 1;
        for(i = 2;i<=n;i++){
            scanf("%d",&dp[i]);
            if(dp[i]>dp[i-1] && dp[i]-dp[i-1] <= 2){
                up[i] = up[i-1] +1;
            }else{
                up[i] = 1;
            }
            if(dp[i-1]>dp[i] && dp[i-1]-dp[i] <= 2){
                down[i] = down[i-1] +1;
            }else{
                down[i] = 1;
            }
        }
        for(i = n-1;i>=1;i--){
            if(dp[i]>dp[i+1] && dp[i]-dp[i+1] <= 2){
                reup[i] = reup[i+1] +1;
            }else{
                reup[i] = 1;
            }
            if(dp[i+1]>dp[i] && dp[i+1]-dp[i] <= 2){
                redown[i] = redown[i+1] +1;
            }else{
                redown[i] = 1;
            }
        }
        mx = 0,ansi = 0;
        for(i=1;i<=n;i++){
            now=max(up[i-1],max(down[i-1],max(reup[i+1],redown[i+1])))+1;
            if(now > mx)  mx=now,ansi=i-1;
            if(dp[i+1]-dp[i-1]<=4 && dp[i+1]-dp[i-1]>=2){
                now = redown[i+1]+up[i-1]+1;
                if(now > mx) mx = now,ansi=i-1;
            }
            if(dp[i-1]-dp[i+1]<=4 && dp[i-1]-dp[i+1]>=2){
                now = down[i-1]+reup[i+1]+1;
                if(now > mx) mx = now,ansi=i-1;
            }
        }
        printf("%d %d\n",mx,ansi);
        memset(up,0,sizeof up);
        memset(down,0,sizeof down);
        memset(dp,0,sizeof dp);
        memset(reup,0,sizeof reup);
        memset(redown,0,sizeof redown);
	}
    return 0;
}
/*
2
12
20 10 11 11 15 10 17 16 10 12 20 20
7
0 0 0 0 0 0 0
*/
