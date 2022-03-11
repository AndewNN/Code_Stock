#include<bits/stdc++.h>
using namespace std;
long long a[1000100];
int main(){
    long long n,i,num,A,ans=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&num);
        a[num]++;
    }
    scanf("%lld",&A);
    for(i=0;i<=A/2;i++){
        if(a[i]&&a[A-i]){
            if(i==A-i){
                ans+=(a[i]*(a[i]-1))/2;
            }
            else{
                ans+=a[i]*a[A-i];
            }
            a[i]=a[A-i]=0;
        }
    }
    printf("%lld\n",ans);
    return 0;
}
// 5 1 3 4 3 0 4
