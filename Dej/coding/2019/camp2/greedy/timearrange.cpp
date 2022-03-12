#include<bits/stdc++.h>
using namespace std;
struct A{
    int i,j;
    bool operator < (const A&o) const{
        if(j != o.j) return j < o.j;
        else         return i < o.i;
    }
};
A a[100100];
int main()
{
    int n,i,j,x,y,mn,ans=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        a[i].i = x;
        a[i].j = y;
    }
    sort(a,a+n);
    mn = a[0].j;
    ans++;
    for(i=1;i<n;i++){
        if(a[i].i>=mn){
            ans++;
            mn = a[i].j;
        }
    }
    printf("%d\n",ans);
    return 0;
}
