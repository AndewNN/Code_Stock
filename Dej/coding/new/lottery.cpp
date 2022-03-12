#include<bits/stdc++.h>
using namespace std;
int a[5]={100,20,10,5,1};
int main()
{
    int i,n,ans=0;
    scanf("%d",&n);
    for(i=0;i<5;i++){
        ans+=n/a[i];
        n%=a[i];
    }
    printf("%d\n",ans);
    return 0;
}
