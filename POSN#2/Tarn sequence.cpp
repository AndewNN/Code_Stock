/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> v[100100];
int a[100100],ans[100100],aa[100100];
int main()
{
    int state=0,i,q,ii,mx=-1e7,l,j,mi;
    scanf("%d",&q);
    for(i=0;i<q;i++)
        scanf("%d",&a[i]);
        for(i=0;i<100000;i++)
            ans[i]=1e9;
    for(i=0;i<q;i++)
    {
        ii=lower_bound(ans,ans+state,a[i])-&ans[0];
        v[ii].push_back(a[i]);
        ans[ii]=min(a[i],ans[ii]);
        if(v[ii].size()==1)
            state++;
    }
    printf("%d\n",state);
    for(mi=1e9,i=state-1;i>=0;i--)
    {
        for(j=0;j<v[i].size();j++)
            if(v[i][j]<mi)
            {
                mi=v[i][j];
                aa[i]=mi;
                break;
            }
    }
    for(i=0;i<state;i++)
        printf("%d ",aa[i]);

    return 0;
}
/*

8
-7 10 9 2 3 8 8 1


9
10 1 11 2 3 14 4 13 5

*/
