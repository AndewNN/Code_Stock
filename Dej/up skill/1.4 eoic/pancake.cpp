#include<bits/stdc++.h>
using namespace std;
char sta,a[110];
int main()
{
    int q,i,j,len,ans;
    scanf("%d",&q);
    for(i=1;i<=q;i++){
        scanf(" %s",a);
        len = strlen(a);
        sta = a[0];
        for(j=1,ans=0;j<len;j++){
            if(sta != a[j]){
                ans++;
                sta  = a[j];
            }
        }
        if(sta != '+'){
            ans++;
        }
        printf("Case #%d: %d\n",i,ans);
    }
    return 0;
}
