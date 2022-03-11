#include<bits/stdc++.h>
using namespace std;
int a[100100];
int main()
{
    int n,q,i,b,c;
    scanf("%d %d",&n,&q);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    while(q--){
        scanf("%d",&b);
        c = upper_bound(a,a+n,b)-a;
        printf("%d\n",c);
    }
    return 0;
}
