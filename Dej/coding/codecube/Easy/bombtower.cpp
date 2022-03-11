#include<bits/stdc++.h>
using namespace std;
int a[500100];
int main()
{
    int i,n,b,m,j,ans;
    scanf("%d %d",&n,&b);
    m = sqrt(500000);
    a[2] = 1;
    for(i=3;i<=500000;i+=2){
        a[i] = 1;
    }
    for(i=3;i<=m;i+=2){
        if(a[i]){
            for(j=i*i;j<=500000;j+=i){
                a[j]=0;
            }
        }
    }
    for(i=0,ans=0;i<=n;i++){
        if(a[i]){
            ans++;
        }
    }
    if(ans-b<=0){
        printf("0\n");
    }else{
        printf("%d\n",ans-b);
    }
    return 0;
}
