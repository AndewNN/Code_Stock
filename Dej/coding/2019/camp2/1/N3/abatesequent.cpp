#include<bits/stdc++.h>
using namespace std;
int x[100100],an[100100],ans[100100];
vector<int> g[100100];
int main()
{
    int n,i,j,mi=1e9,ii,st=0,ct;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
        x[i]*=(-1);
        an[i] = 1e9;
    }
    for(i=0;i<n;i++){
        ii = lower_bound(an,an+st,x[i])-an;
        g[ii].push_back(x[i]);
        an[ii] = min(an[ii],x[i]);
        if(g[ii].size()==1){
            st++;
        }
    }
    ct = st-1;
    for(i=st-1;i>=0;i--){
        for(j=0;j<g[i].size();j++){
            if(g[i][j]<mi){
                mi = g[i][j];
                ans[ct] = mi;
                ct--;
                break;
            }
        }
    }
    printf("%d\n",st);
    for(i=0;i<st;i++){
        printf("%d ",-ans[i]);
    }
    return 0;
}
