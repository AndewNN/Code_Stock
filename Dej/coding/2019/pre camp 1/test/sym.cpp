/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[1100];
int main()
{
    int t,n,i,j,si,sj,ans,ma=-100;
    scanf("%d",&t);
    while(t--){
        ma = -100;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++){
            if(i==0 && a[i]==0){
                si =i;
            }
            if(i>0){
                if(a[i]==0 && a[i-1]==1){
                si =i;
                }
            }
            if(a[i]==0 && a[i+1]==1 && i+1 != n){
                sj = i;
                if(si == sj && 1 > ma){
                    ma =1;
                    ans = si;
                }else if((sj-si+1)%2!=0 && sj-si+1 > ma){
                    ma =sj-si+1;
                    ans = (sj+si)/2;
                }
            }else if(i+1 == n && a[i]==0){
                 sj = i;
                if(si == sj && 1 > ma){
                    ma =1;
                    ans = si;
                }else if((sj-si+1)%2!=0 && sj-si+1 > ma){
                    ma =sj-si+1;
                    ans = (sj+si)/2;
                }
            }
        }
        if(ma!=-100){
        printf("%d\n",ans);
        }else{
        printf("-1\n");
        }
    }
    return 0;
}
