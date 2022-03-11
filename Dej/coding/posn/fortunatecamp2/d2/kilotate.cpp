/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[100100],n,b[100100];
long long ans;
void mergesort(int l,int r){
    if(l==r) return ;
    int mid = (l+r)/2,i,j,k;
    mergesort(l,mid);
    mergesort(mid+1,r);
    i=l,j=mid+1,k=l;
    while(i<=mid && j<=r){
        if(a[i]<a[j])
            b[k++]=a[i++];
        else
            b[k++]=a[j++],ans+=mid-i+1;
    }
    while(i<=mid)
        b[k++]=a[i++];
    while(j<=r)
        b[k++]=a[j++];
    for(i=l;i<=r;i++)
        a[i] = b[i];
}
int main()
{
    int q,i;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        ans = 0;
        mergesort(0,n-1);
        printf((ans%2==0)?"yes\n":"no\n");
    }
    return 0;
}
