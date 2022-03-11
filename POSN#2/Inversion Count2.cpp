/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int a[1010],b[1010],ans;
void ms(int l,int r)
{
    if(l>=r)      return;
    int mid = (l+r)/2;
    ms(l,mid);
    ms(mid+1,r);
    int i=l,j=mid+1,k=l;
    while(i<=mid&&j<=r){
        if(a[i]<=a[j])
            b[k++]=a[i++];
        else
            b[k++]=a[j++],ans+=mid-i+1;
    }
    while(i<=mid)
        b[k++]=a[i++];
    while(j<=r)
        b[k++]=a[j++];
    for(i=l;i<=r;i++)
        a[i]=b[i];

}
int main()
{
    int i,l,n,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    ms(0,n-1);
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n%d\n",ans);
    return 0;
}

