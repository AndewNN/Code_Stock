#include<bits/stdc++.h>
using namespace std;
int a[1001000];
int main()
{
    int q,i,n;
    scanf("%d",&q);
    a[0]=0;
    a[1]=0;
    for(i=2;i<=1000000;i++){
        if(i%3==0){
            if(a[i/3]>a[i-1]){
                a[i] = a[i-1]+1;
            }else{
                a[i] = a[i/3]+1;
            }
        }else if(i%2 == 0){
            if(a[i/2]>a[i-1]){
                a[i] = a[i-1]+1;
            }else{
                a[i] = a[i/2]+1;
            }
        }else{
            a[i] = a[i-1]+1;
        }
    }
    while(q--){
        scanf("%d",&n);
        printf("%d\n",a[n]);
    }
    return 0;
}
