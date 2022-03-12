/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,d,ans=0,a,b;
    scanf("%d %d",&q,&d);
    while(q--){
        scanf("%d %d",&a,&b);
        if(abs(a-b)<=d){
            ans+=max(a,b);
        }else{
            scanf("%d",&a);
            ans+=a;
        }
    }
    printf("%d\n",ans);
    return 0;
}
