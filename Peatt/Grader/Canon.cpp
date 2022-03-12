/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int a[1000100];
int main()
{
    int n,m,k,l,i,j,x,si,sj,ans=0;
    scanf("%d %d %d %d",&n,&m,&k,&l);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    while(k--){
        scanf("%d",&x);
        ans = 0;
        si = max(0,x-l);
        sj = x+l;
        if(m==1){
            ans += (upper_bound(a,a+n,sj)-a) - (lower_bound(a,a+n,si)-a);
            printf("%d\n",ans);
        }else{
        for(i=1;i<m;i++){
            scanf("%d",&x);
            if(sj >= x-l){
                sj = x+l;
            }else{
                ans += ((upper_bound(a,a+n,sj)-a) -(lower_bound(a,a+n,si)-a));
                si = x-l;
                sj = x+l;
            }
            if(i == m-1){
                ans += ((upper_bound(a,a+n,sj)-a) -(lower_bound(a,a+n,si)-a));
            }
        }
        printf("%d\n",ans);
        }
    }
    return 0;
}
