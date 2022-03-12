/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int dp[100100],s[5]={1,5,10,25,50};
int main()
{
    int i,q,n,state,j;
    dp[0]=1;
    for(i=0;i<5;i++)
        for(j=s[i];j<100010;j++)
        {
            dp[j]+=dp[j-s[i]];
            dp[j]%=1000003;
        }
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d",&n);
        printf("%d\n",dp[n]);
    }


    return 0;
}
