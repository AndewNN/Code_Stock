#include<bits/stdc++.h>
using namespace std;
int a[200100],x[200100],y[200100];
int main()
{
    int n,i,b,a1=0,a2=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&b);
        a[b]++;
    }
    for(i=1;i<=n;i++){
        if(a[i]>0){
            x[i]++;
        }
        if(a[i]>1){
            if(a[i-1]==0 && i-1>=1){
                x[i-1]++;
            }else if(a[i+1]==0&& i+1<=n){
                x[i+1]++;
            }
        }
        if(a[i]>2){
            if(a[i-1]==0 && i-1>=1){
                x[i-1]++;
            }
            if(a[i+1]==0&& i+1<=n){
                x[i+1]++;
            }
        }
    }
    for(i=1;i<=n;i++){
        if(a[i]>0){
            if(y[i-1]>0){
                y[i-1]++;
            }else if(i+1 <= n){
                y[i+1]++;
            }else{
                y[i]++;
            }
        }
    }
    for(i=1;i<=n;i++){
        if(x[i]>0){
            a1++;
        }
        if(y[i]>0){
            a2++;
        }
    }
    printf("%d %d\n",a2,a1);
    return 0;
}
