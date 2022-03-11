/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
long long x[3],y[3];
long long s(int aa,int bb){
    if(aa>bb)
        return aa*bb;
    if(aa==bb)
        return 0;
    if(aa<bb)
        return aa*bb*-1;
}
int main()
{
    long long ans=-1e9,i,now;
    for(i=0;i<3;i++)
        scanf("%lld",&x[i]);
    for(i=0;i<3;i++)
        scanf("%lld",&y[i]);
    now=0;
    now+=s(x[0],y[0]);
    now+=s(x[0],y[1]);
    now+=s(x[0],y[2]);
    printf("%lld\n",now);
    ans=max(ans,now);

    now=0;
    now+=s(x[0],y[0]);
    now+=s(x[0],y[2]);
    now+=s(x[0],y[1]);
    printf("%lld\n",now);
    ans=max(ans,now);

    now=0;
    now+=s(x[0],y[1]);
    now+=s(x[0],y[0]);
    now+=s(x[0],y[2]);
    printf("%lld\n",now);
    ans=max(ans,now);

    now=0;
    now+=s(x[0],y[1]);
    now+=s(x[0],y[2]);
    now+=s(x[0],y[0]);
    printf("%lld\n",now);
    ans=max(ans,now);

    now=0;
    now+=s(x[0],y[2]);
    now+=s(x[0],y[0]);
    now+=s(x[0],y[1]);
    printf("%lld\n",now);
    ans=max(ans,now);

    now=0;
    now+=s(x[0],y[2]);
    now+=s(x[0],y[1]);
    now+=s(x[0],y[1]);
    printf("%lld\n",now);
    ans=max(ans,now);

    printf("%lld",ans);

    return 0;
}

