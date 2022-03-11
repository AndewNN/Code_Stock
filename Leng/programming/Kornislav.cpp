#include<bits/stdc++.h>
using namespace std;
int a[10];
int main(){
    int i,n=4;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    printf("%d\n",a[0]*a[2]);

}

