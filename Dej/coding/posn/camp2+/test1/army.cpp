/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
long long dp[1<<12],mark[1<<12];
long long play(long long bit){
    if(dp[bit]!=-1) return dp[bit];
    if(_builtin_popcount(bit)==1) return dp[bit]=0;
    int i;
    for(i=1;i<bit;i++){
        if((i&bit)!=i) continue;
        long long cost = max(())
    }
}
int main()
{

    return 0;
}
