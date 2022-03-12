#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,n,i,m,k,cnt=0,ch,mx = -10;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        k = n;
        m = sqrt(n);
        mx = -10;
        for(i=2;i<=m;i++){
            k = n;
            cnt = 0;
            ch = 1;
            while(k>1){
                if(k%i==0){
                    cnt++;
                    k/=i;
                }else{
                    ch = 0;
                    break;
                }
            }
            if(ch){
                mx = max(mx,cnt);
                break;
            }
        }
        if(mx!=-10){
            printf("%d\n",mx);
        }else{
            printf("NO\n");
        }
    }
    return 0;
}
