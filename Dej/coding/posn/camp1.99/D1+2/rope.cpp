/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[10000],l[10000],r[10000],dp[10000];
int main()
{
    int q,n,i,idx,cnt,ans;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        for(i=1;i<=n;i++)   scanf("%d",&a[i]);
        cnt=0;
        for(i=1;i<=n;i++){
            idx = upper_bound(dp,dp+cnt,a[i])-dp;
            if(idx-1>=0 && dp[idx-1]==a[i]){
                l[i] = cnt; continue;
            }
            if(idx==cnt)    cnt++;
            l[i]=cnt;
            dp[idx]=a[i];
        }
        memset(dp,0,sizeof dp);
        cnt=0;
        for(i=n;i>=1;i--){
            idx = upper_bound(dp,dp+cnt,a[i])-dp;
            if(idx-1>=0 && dp[idx-1]==a[i]){
                r[i] = cnt; continue;
            }
            if(idx==cnt)    cnt++;
            r[i]=cnt;
            dp[idx]=a[i];
        }
        ans = -1;
        for(i=1;i<=n;i++)
            ans= max(ans,l[i]+r[i]-1);
        printf("%d\n",ans);
        memset(l,0,sizeof l);
        memset(r,0,sizeof r);
        memset(dp,0,sizeof dp);
    }
    return 0;
}
