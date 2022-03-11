/*
    TASK: Intro01
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
long long qsuma[1000002],qsumc[1000002];
char a[1000005];
int main()
{
long long q,i,ans,len;
scanf("%lld",&q);
while(q--){
    scanf(" %s",a+1);
    len = strlen(a+1);
    for(i=1;i<=len;i++){
     qsuma[i]=qsuma[i-1],qsumc[i]=qsumc[i-1];
     if(a[i]=='A')  qsuma[i]++;
     if(a[i]=='C')  qsumc[i]++;
    }
    for(ans=0,i=1;i<=len;i++){
        if(a[i]=='B'){
            ans+=(qsuma[i-1]*(qsumc[len]-qsumc[i]));
        }
    }
    printf("%lld\n",ans);
}
    return 0;
}
