/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int a[100100],s[100100];
int main()
{
    int n,q,i,m,ans;
    scanf("%d %d",&n,&q);
    scanf("%d",&a[0]);
    for(i=1; i<n; i++)
    {
        scanf("%d",&a[i]);
        a[i]+=a[i-1];
    }
    for(i=n-2;i>=0;i--)
        a[i]=min(a[i],a[i+1]);
    while(q--)
    {
        scanf("%d",&m);
        ans=upper_bound(a,a+n,m)-&a[0];
        printf("%d\n",ans);
    }
    return 0;
}
/*

5 3
10 20 -10 30 60
31 52 9

*/
