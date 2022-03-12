/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
long long a[100100];
int main()
{
    long long n,i,mi=1e10;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    sort(a,a+n);
    for(i=1;i<n;i++){
        if((a[i]-a[i-1])<mi){
            mi = (a[i]-a[i-1]);
        }
    }
    printf("%lld",mi);
return 0;
}
