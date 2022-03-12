#include<bits/stdc++.h>
using namespace std;
int a[300100];
int main()
{
    int n,m,q,i,j;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(i=n-1,j=n;i>=0;i--){
            if(a[i]==j){
                j--;
            }
        }
        printf("%d\n",j);
    }
    return 0;
}
