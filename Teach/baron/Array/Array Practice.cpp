#include<bits/stdc++.h>
using namespace std;
int a[1010];
int main(){
    int n,i,k,cou=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&k);
    for(i=n-1;i>=0;i--){
        printf("%d ",a[i]);
        if(a[i]==k)
            cou++;
    }
    printf("\n%d",cou);
    return 0;
}
