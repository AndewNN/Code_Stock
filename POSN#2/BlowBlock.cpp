/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> a[2][2];
int main()
{
    int i,j,n,ans=0,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            scanf("%d",&b);
            a[i%2][j%2].push_back(b);
        }
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            sort(a[i][j].begin(),a[i][j].end());
    for(i=0;i<a[0][0].size();i++)
        ans+=a[0][0][i]*a[0][1][i]*a[1][0][i]*a[1][1][i];
    printf("%d\n",ans);

    return 0;
}

