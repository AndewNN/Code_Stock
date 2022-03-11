#include<bits/stdc++.h>
using namespace std;
int a[100100];
int main()
{
    int n,i,mx=0,cou;
    scanf("%d %d",&n,&a[0]);
    for(i=1,cou=1;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]<a[i-1]){
            mx = max(mx,cou);
            cou=1;
        }else{
            cou++;
        }
    }
    mx = max(mx,cou);
    printf("%d\n",mx);
    return 0;
}
