/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int a[200100],dp[200100];
int main()
{
    int n,i,st,ed,si=1,mx=-1e9,ch=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
    {
        dp[i]=dp[i-1]+a[i];
        if(dp[i]<0)
        {
            dp[i]=0;
            si=i+1;
            continue;
        }
        if(dp[i]>mx)
        {
            ch=1;
            mx=dp[i];
            ed=i;
            st=si;
        }

    }
    if(!ch)
    {
        for(i=1;i<=n;i++)
        {
            if(a[i]>mx)
            {
                mx=a[i];
                st=i,ed=i;
            }
        }
    }
    printf("%d %d\n%d",st,ed,mx);


    return 0;
}
/*

5
4 -6 3 -2 6

*/
