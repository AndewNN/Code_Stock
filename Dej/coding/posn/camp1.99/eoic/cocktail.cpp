/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
long long b[1000100];
int main()
{
    int q,n,m,i,sum,j;
    long long ans = 0;
    scanf("%d",&q);
    for(i=0;i<q;i++){
        scanf("%d",&m);
        b[m]+=1;
    }
    scanf("%d",&sum);
    m = sum/2;
    for(i=0;i<m;i++){
        ans += (long long)(b[i]*b[sum-i]);
    }
    if(sum%2==0){
    ans += (long long)b[sum/2]*(b[sum/2]-1)/2;
    }else{
    ans += (long long)b[sum/2]*b[sum/2+1];
    }
    printf("%lld\n",ans);
    return 0;
}
