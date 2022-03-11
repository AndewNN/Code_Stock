#include<bits/stdc++.h>
using namespace std;
int a[100100],s[100100];
int main()
{
    int n,q,i,m,ans;
    scanf("%d %d %d",&n,&q,&a[0]);
    for(i=1;i<n;i++){
        scanf("%d",&a[i]);
        a[i]+=a[i-1];
    }
    for(i=n-2;i>=0;i--){
        a[i]=min(a[i],a[i+1]);
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    while(q--){
        scanf("%d",&m);
        printf("%d\n",upper_bound(a,a+n,m)-a);
    }
    return 0;
}
