/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> g[100100];
int a[100100],ans[100100],mi[100100];
int main()
{
    int n,m,i,j,mx,state=0,ii;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        mi[i]=1e9;
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        m*=-1;
        ii=lower_bound(mi,mi+state,m)-&mi[0];
        mi[ii]=min(mi[ii],m);
        g[ii].push_back(m);
        if(g[ii].size()==1)
            state++;
    }
    ans[state-1]=g[state-1][0];
    for(i=state-2;i>=0;i--)
    {
        for(j=0;j<g[i].size();j++)
        {
            if(g[i][j]<ans[i+1])
            {
                ans[i]=g[i][j];
                break;
            }
        }
    }
    printf("%d\n",state);
    for(i=0;i<state;i++)
        printf("%d ",ans[i]*-1);

    return 0;
}
/*

9
7 1 4 3 7 2 8 1 1

*/
