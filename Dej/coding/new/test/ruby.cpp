#include<bits/stdc++.h>
using namespace std;
int a[750100];
string st;
int main()
{
    int n,m,c,b,i,ans;
    scanf("%d %d",&n,&m);
    while(m--){
        cin>>st;
        if(st == "Bury"){
            scanf("%d %d",&b,&c);
            for(i=c;i<=n;i+=(i&-i)){
                a[i]+=b;
            }
        }else if(st == "Find"){
            scanf("%d %d",&b,&c);
            ans = 0;
            for(i=b-1;i>=1;i-=(i&-i)){
                ans-=a[i];
            }
            for(i=c;i>=1;i-=(i&-i)){
                ans+=a[i];
            }
            printf("%d\n",ans);
        }
    }
    return 0;
}
