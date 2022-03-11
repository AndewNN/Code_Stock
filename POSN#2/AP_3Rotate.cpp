/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
long long n,a[100100],ans=0,b[100100];
void mergesort(long long l,long long r){
    if(l>=r) return ;
    long long mid=(l+r)/2;
    mergesort(l,mid);
    mergesort(mid+1,r);
    long long  i=l,j=mid+1,k=l;
    while(i<=mid && j<=r){
        if(a[i] <= a[j]){
            b[k++]=a[i++];
        }
        else{
            b[k++]=a[j++],ans+=mid-i+1;
        }
    }
    while(i<=mid){
        b[k++]=a[i++];
    }
    while(j<=r){
        b[k++]=a[j++];
    }
    for(i=l;i<=r;i++) a[i] = b[i];
}
int main(){
    long long i,q;
    scanf("%lld",&q);
    while(q--){
        ans=0;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
            scanf("%lld",&a[i]);
        mergesort(0,n-1);
        printf((ans%2==0)?"yes\n":"no\n");
    }
    return 0;
}
