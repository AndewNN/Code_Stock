#include<bits/stdc++.h>
using namespace std;
int a[1000100],dp[1000100];
int main()
{
    int n,i,mx=-1;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-1; i>=0; i--)
    {
        mx = max(mx,a[i]);
        dp[i] = mx;
    }
    for(i=0; i<n-1; i++)
    {
        if(a[i]<a[i-1])
        {
            a[i] = a[i-1];
        }
        printf("%d ",min(dp[i+1],a[i]));
    }
    return 0;
}
