#include<bits/stdc++.h>
using namespace std;
int a[100100],b[100100];
int main()
{
    int n,i,ma=-10,st;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    sort(a,a+n);
    sort(b,b+n);
    if(n%2==1){
        st = n/2+1;
    }else{
        st =n/2;
    }
    for(i=0;i<n;i++){
        if(ma < min(a[i],b[n-1-i])){
            ma = min(a[i],b[n-1-i]);
        }
    }
    printf("%d",ma);
    return 0;
}
