/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int a[1010],dpl[1010],dpr[1010];
int main()
{
    int n,m,q,i,j,mx;
    scanf("%d",&q);
    while(q--)
    {
        mx=-1;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
            scanf("%d",&a[i]);
        a[0]=a[n+1]=-1;
        for(i=1;i<=n;i++)
            for(j=0;j<i;j++)
                if(a[i] > a[j] && dpl[i] < dpl[j]+1)
                    dpl[i] = dpl[j]+1;
        for(i=n;i>=1;i--)
            for(j=n+1;j>i;j--)
                if(a[i] > a[j] && dpr[i] < dpr[j]+1)
                    dpr[i] = dpr[j]+1;
        for(i=1;i<=n;i++)
            mx=max(mx,dpl[i]+dpr[i]-1);
        printf("%d\n",mx);
        memset(dpl,0,sizeof dpl);
        memset(dpr,0,sizeof dpr);
    }

    return 0;
}
/*

1
18
0 2 8 4 3 2 4 1 8 5 7 1 3 9 6 4 2 0

*/
