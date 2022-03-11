#include<bits/stdc++.h>
using namespace std;
int a[200100];
int main()
{
    int n,m,an,i,j;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    while(m--){
        scanf("%d",&an);
        i = upper_bound(a,a+n,an)-a;
        printf("%d\n",n-i+1);
    }
    return 0;
}
/*
5 4
75 84 90 94 99
*/
