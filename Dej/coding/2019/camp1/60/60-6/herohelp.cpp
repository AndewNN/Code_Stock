#include<bits/stdc++.h>
using namespace std;
int a[100100],b[100100];
int main()
{
    int n,k,i,sum1=1,sum2,l=0,l2=0,idx,ma=-1000;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d %d",&a[i],&b[i]);
    }
    sort(a,a+n);
    sort(b,b+n);
    for(i=0;i<n;i++){
        idx = lower_bound(a,a+n,a[i]+k)-a;
        ma = max(ma,idx-i);
        idx = lower_bound(b,b+n,b[i]+k)-b;
        ma = max(ma,idx-i);
    }
    printf("%d",ma);
    return 0;
}
