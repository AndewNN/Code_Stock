/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int s[100100],a[100100];
int main()
{
    int i,j,n,k,now,l=1,aa,b;
    long long sum=0;
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++){
        scanf("%d",&now);
        a[now]=i;
    }
    for(i=1;i<=n;i++)
    {
        s[i]=a[i]-l;
        l=a[i];
        if(s[i]<0)
            s[i]+=n;
    }
    for(i=1;i<=n;i++)
        sum+=s[i];
    aa=k/n;
    sum*=aa;
    for(i=1;i<=k%n;i++)
        sum+=s[i];
    printf("%lld",sum);
    return 0;
}
/*

4 6
4
2
1
3

*/
