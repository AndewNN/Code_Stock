#include<bits/stdc++.h>
using namespace std;
map<string,int> mp;
string a;
int main()
{
    int n,m,i,ch=1,ans=1;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
        scanf(" %s",a);
        if(mp[a]!=0 && ch == 1){
            ans = mp[a];
            ch = 0;
        }else{
            mp[a] = i;
        }
    }
    printf("%d\n",ans);
    return 0;
}
