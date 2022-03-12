/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;
char str[260];
int dp[260][260][3];
vector<PII> p[3];
int di(int l,int r,int t){
    if(dp[l][r][t]!=-1) return dp[l][r][t];
    if(l==r){
        if(t==str[l]-'0')   return dp[l][r][t]=1;
        else                return dp[l][r][t]=0;
    }
    for(int i=l;i<r;i++)
        for(auto x:p[t])
            if(di(l,i,x.first) && di(i+1,r,x.second))
                return dp[l][r][t]=1;
    return dp[l][r][t]=0;
}
int main()
{
    int n,q=20;
    p[0].push_back({0,2});
    p[1].push_back({0,1});
    p[1].push_back({1,1});
    p[1].push_back({1,2});
    p[1].push_back({2,0});
    p[1].push_back({2,2});
    p[2].push_back({0,0});
    p[2].push_back({1,0});
    p[2].push_back({2,1});
    while(q--){
        scanf("%d %s",&n,str+1);
        memset(dp,-1,sizeof dp);
        printf(di(1,n,0)? "yes":"no");
    }

    return 0;
}

