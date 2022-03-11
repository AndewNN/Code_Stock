#include<bits/stdc++.h>
using namespace std;
int a[110];
int main(){
    int i,n,l,idx;
    scanf("%d %d",&l,&n);
    for(i=1;i<=l;i++)
        a[i]=a[i-1]+i*i;
    idx=upper_bound(a+1,a+l+1,n)-(a+1);
    printf("%d",l-idx);



}
