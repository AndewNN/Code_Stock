/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[100100],b[100100];
void mergesort(long long l,long long r){
    if(r==l) return ;
    long long i,j,k,mid;
    mid = (l+r)/2;
    mergesort(l,mid);
    mergesort(mid+1,r);
    i=l,k=l,j=mid+1;
    while(i<=mid && j<=r){
        if(a[i]<=a[j])
            b[k++]=a[i++];
        else if(a[i]>a[j])
            b[k++]=a[j++],ans+=(mid-i+1);
    }
    while(i<=mid)
        b[k++]=a[i++];
    while(j<=r)
        b[k++]=a[j++];
    for(i=l;i<=r;i++){
        a[i]=b[i];
    }
}
int main()
{
    int q,n;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            scanf("%d",&a[i])
        }
    }
    return 0;
}
