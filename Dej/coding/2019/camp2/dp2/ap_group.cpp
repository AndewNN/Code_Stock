#include<bits/stdc++.h>
using namespace std;
int dp[100100];
pair<int,int> a[100100];
int main()
{
    int q,n,i,idx,cnt;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        cnt=0;
        memset(dp,0,sizeof dp);
        for(i=0;i<n;i++){
            scanf("%d %d",&a[i].first,&a[i].second);
            a[i].second*=-1;
        }
        sort(a,a+n);
        for(i=0;i<n;i++){

            idx=upper_bound(dp,dp+cnt,a[i].second)-dp;
            if(idx==cnt)cnt++;
            dp[idx]=a[i].second;
        }
        printf("%d\n",cnt);
    }
    return 0;
}
