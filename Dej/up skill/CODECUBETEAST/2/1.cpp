#include<bits/stdc++.h>
using namespace std;
double a[10100];
int main()
{
    int n,m,i;
    scanf("%d %d",&n,&m);
    a[0] = 0;
    for(i=1;i<=n;i++){
        scanf("%lf",&a[i]);
        a[i] += a[i-1];
    }
    printf("%d\n",n-m+1);
    for(i=m;i<=n;i++){
        printf("%.6lf\n",(a[i]-a[i-m])/m);
    }
    return 0;
}
