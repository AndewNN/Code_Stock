#include<bits/stdc++.h>
using namespace std;
int x[100100],y[100100];
int main()
{
    int n,h,i,d=0,l=0,ans=-100;
    scanf("%d %d",&n,&h);
    for(i=1;i<=n;i++){
        scanf("%d %d",&x[i],y[i]);
    }
    for(i=1,al = h;i<=n;i++){
        if(l=0){
            l=i;
            d = y[i]-x[i];
        }else{
            if(al<x[i]-y[i-1]){
                ans = max(ans,d+h);
                l = l+1;
                al+=
            }else{
                al
            }
        }
    }
    return 0;
}
