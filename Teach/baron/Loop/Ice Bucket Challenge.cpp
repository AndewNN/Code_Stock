#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k,g,ans;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&g,&k);
        ans = (g-100)/(100*k-90);
        if((g-100)%(100*k-90)!=0)
            ans++;
        if(g<=100)
            ans=0;
        printf("%d\n",ans);
    }


}
