#include<bits/stdc++.h>
using namespace std;
int a[100100];
int main()
{
    int q,n,s,i,mx=1,sum;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&n,&s);
        for(i=1,mx=1,sum=0;i<=n;i++){
            scanf("%d",&a[i]);
            sum+=a[i];
            if(sum<=s){
                if(a[i]>a[mx]){
                    mx = i;
                }
            }
        }
        if(sum <= s){
            printf("0\n");
        }else{
            printf("%d\n",mx);
        }
    }
    return 0;
}
