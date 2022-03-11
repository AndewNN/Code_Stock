#include<bits/stdc++.h>
using namespace std;
int x[100100],ans[100100],an[100100];
vector<int> g[100100];
int main()
{
    int n,i,cnt=0,ii,a,st=0,j,mi=1e9;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++){
        ans[i]=1e9;
    }
    for(i=0;i<n;i++){
        ii = lower_bound(ans,ans+st,x[i]) - ans;
        ans[ii] = min(ans[ii],x[i]);
        g[ii].push_back(x[i]);
        if(g[ii].size()==1){
            st++;
        }
    }
    cnt = st-1;
    for(i=st-1;i>=0;i--){
        for(j=0;j<g[i].size();j++){
            if(g[i][j]<mi){
                mi = g[i][j];
                an[cnt] = mi;
                cnt--;
                break;
            }
        }
    }
    printf("%d\n",st);
    for(i=0;i<st;i++){
        printf("%d ",an[i]);
    }
    return 0;
}
