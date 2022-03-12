#include<bits/stdc++.h>
using namespace std;
int a[100100];
int main()
{
    int n,q,an,b,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&b);
        a[i]+=a[i-1]+b;
    }
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&an,&b);
        printf("%d",a[b]-a[an-1]);
    }
    return 0;
}
