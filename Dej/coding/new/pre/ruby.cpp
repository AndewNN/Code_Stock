#include<bits/stdc++.h>
using namespace std;
int a[750100];
string b;
int main()
{
    int n,m,x,y,i,ans;
    scanf("%d %d",&n,&m);
    while(m--){
        cin>>b;
        scanf("%d %d",&x,&y);
        if(b=="Bury"){
            for(i=y;i<=n;i+=(i&-i)){
                a[i]+=x;
            }
        }else{
            ans =0;
            for(i=y;i>=1;i-=(i&-i)){
                ans+=a[i];
            }
            for(i=x-1;i>=1;i-=(i&-i)){
                ans-=a[i];
            }
            printf("%d\n",ans);
        }
    }
}
/*
10 5
Bury 5 5
Bury 10 7
Find 3 7
Bury 20 8
Find 6 10
*/
