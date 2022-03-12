/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
long long r[100100],l[100100],a[100100],ma=0;
int main()
{
    int n,q,i,la;
    scanf("%d",&q);
    while(q--)
    {
        ma=0;
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            scanf("%lld",&a[i]);
            l[i]=i-1,r[i]=i+1;
        }
        for(i=1; i<=n; i++)
        {
            while(a[i]<=a[l[i]] && l[i]!=0)
                l[i]=l[l[i]];
        }
        for(i=n; i>=1; i--)
        {
            while(a[i]<=a[r[i]] && r[i]!=n+1)
                r[i]=r[r[i]];
        }
        for(i=1;i<=n;i++)
            ma=max(ma,(r[i]-l[i]-1)*a[i]);
        printf("%lld\n",ma);
        memset(r,0,sizeof r);
        memset(l,0,sizeof l);
        memset(a,0,sizeof a);
    }

    return 0;
}
/*

2
6
2 1 5 6 2 3
3
100 100 100

*/
