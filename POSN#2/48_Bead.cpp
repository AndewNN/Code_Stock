/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int dp[110][110],qs[110],m[110][110];
int play(int l,int r)
{
    if(l==r)        return 0;
    if(m[l][r])    return dp[l][r];
    int mi=1e9,now,s;
    for(int k=l;k<r;k++){
        now=play(l,k)+play(k+1,r)+((qs[k]-qs[l-1])%100)*((qs[r]-qs[k])%100);
        if(now<mi){
            mi=now;

        }
    }
    m[l][r]=1;
    return dp[l][r]=mi;

}
int main()
{
    int q,n,i,now;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            scanf("%d",&qs[i]);
            qs[i]+=qs[i-1];
        }
        printf("%d\n",play(1,n));
        memset(dp,0,sizeof dp);
        memset(m,0,sizeof m);
    }


    return 0;
}
