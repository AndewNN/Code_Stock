#include<bits/stdc++.h>
using namespace std;
int a[2300];
int main()
{
    int n,k,i,sum=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    for(i=n-1;i>=0;i-=k){
        sum += a[i];
    }
    printf("%d",sum);
    return 0;
}
