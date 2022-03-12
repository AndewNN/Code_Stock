/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> g[10010];
int dp[10100];
int main()
{
    int n,k,m,i,a,b,mi;
    scanf("%d %d %d",&k,&n,&m);
    for(i=0;i<m;i++)
    {
        scanf("%d %d",&a,&b);
        g[a].push_back(b);
    }
    for(i=1;i<=n;i++)
        dp[i]=1e9;
    dp[1]=0;
    for(i=1;i<=n;i++)
    {
        for(auto x:g[i])
            dp[x]=min(dp[x],dp[i]+1);
    }

    for(i=n;i>=0;i--)
        if(dp[i]<=k)
        {
            printf("%d\n",i);
            return 0;
        }

    return 0;
}
/*

2 6 5
1 2
1 3
2 5
3 4
5 6

*/
