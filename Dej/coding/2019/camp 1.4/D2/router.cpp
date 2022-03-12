#include<bits/stdc++.h>
using namespace std;
int a[100100];
int main()
{
    int n,m,i,cou,l,r,mid,tn;
    scanf("%d %d",&n,&m);
    for(i =0;i<m;i++){
        scanf("%d",&a[i]);
        a[i]=a[i] * 10;
    }
    sort(a,a+m);
    l = 0,r = 1e9;
    while(l<r){
        mid = (l+r)/2;
        cou = 1;
        tn = a[0]+mid;
        for(i=0;i<m;i++){
            if(abs(a[i]-tn) > mid){
                tn = a[i]+mid;
                cou++;
            }
        }
        if(cou <= n)  r = mid;
        else          l = mid+1;
    }
    printf("%d.%d\n",l/10,l%10);
    return 0;
}
