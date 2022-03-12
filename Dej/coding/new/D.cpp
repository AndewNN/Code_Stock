#include<bits/stdc++.h>
using namespace std;
struct A{
    int l,r,pos;
    bool operator < (const A&o) const{
        if(l!=o.l) return l < o.l;
        return r < o.r;
    }
};
A a[200100];
int ans[200100];
int main()
{
    int mx,i,q,n,ch,ch2;
    scanf("%d",&q);
    while(q--){
        ch2 = 1;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d %d",&a[i].l,&a[i].r);
            a[i].pos = i;
        }
        sort(a,a+n);
        mx = a[0].r;
        ans[a[0].pos] = ch = 1;
        for(i=1;i<n;i++){
            if(a[i].l <= mx){
                mx = max(mx,a[i].r);
                ans[a[i].pos] = ch;
            }else{
                mx = a[i].r;
                ch = 3-ch;
                ans[a[i].pos] = ch;
                ch2 = 0;
            }
        }
        if(ch2){
            printf("-1\n");
        }else{
            for(i=0;i<n;i++){
                printf("%d ",ans[i]);
            }
            printf("\n");
        }
    }
    return 0;
}
