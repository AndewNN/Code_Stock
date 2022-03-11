/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[1000100],b[1000100],c[1000100];
int main()
{
    int q,n,j,i,num,mx,ans;
    scanf("%d",&q);
    while(q--){
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&num);
        a[num]=i;
    }
    for(i=n+1;i<=2*n;i++){
        scanf("%d",&num);
        b[num]=i;
    }
    for(i=1;i<=n;i++){
        num = (b[i]-a[i])%n;
        c[num]++;
    }
    mx=0,ans=0;
    for(i=0;i<=n;i++){
        if(c[i]>mx){
            mx = c[i],ans=i;
        }
    }
    printf("%d %d\n",mx,ans);
    memset(c,0,sizeof c);
    }
    return 0;
}
