#include<bits/stdc++.h>
using namespace std;
int a[500100];
string st;
int main()
{
    int n,m,x,y,z,i,ans;
    scanf("%d %d",&n,&m);
    while(m--){
        cin>>st;
        if(st=="Yoyo"){
            scanf("%d %d %d",&x,&y,&z);
            if(y>z){
                swap(y,z);
            }
            for(i=y;i<=n;i+=(i&-i)){
                a[i]+=x;
            }
            for(i=z+1;i<=n;i+=(i&-i)){
                a[i]-=x;
            }
        }else{
            scanf("%d",&x);
            ans = 0;
            for(i=x;i>=1;i-=(i&-i)){
                ans+=a[i];
            }
            printf("%d\n",ans);
        }
    }
    return 0;
}
