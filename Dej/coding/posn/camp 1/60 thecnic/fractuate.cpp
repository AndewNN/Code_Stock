/*
    TASK: Intro01
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<bits/stdc++.h>int a[1010
using namespace std;
int main()
{
int Min,now,ans=0,n,i;
scanf("%d %d",&n,&Min);
for(i=1;i<n;i++){
    scanf("%d",&now);
    if(now-Min>ans)
        ans = now-Min;
    if(now<Min)
        Min = now;
}
printf("%d\n",ans);
    return 0;
}
