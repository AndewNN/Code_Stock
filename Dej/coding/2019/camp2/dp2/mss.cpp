#include<bits/stdc++.h>
using namespace std;
int dp[200100];
int main()
{
    int n,i,sum,a,st,et,mx=-1,ans1,ans2,ans3=INT_MIN,x;
    scanf("%d",&n);
    st = 1;
    et = 1;
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        if(a > 0){
            et = 0;
        }
        if(a > ans3){
            ans3 = a;
            x = i;
        }
        sum = a + dp[i-1];
        if(sum < 0){
            sum = 0;
            st = i+1;
        }
        if(sum > mx){
            ans1 = st;
            ans2 = i;
            mx = sum;
        }
        dp[i] = sum;
       // printf("%d\n",sum);
    }
    if(!et){
        printf("%d %d\n%d",ans1,ans2,mx);
    }else{
        printf("%d %d\n%d",x,x,ans3);
    }
    return 0;
}
