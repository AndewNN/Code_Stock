/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
stack<long long> st;
int main()
{
    long long i,q,p,ans = 0;
    scanf("%lld",&q);
    for(i=1;i<q;i++){
        scanf("%d",&p);
        st.push(p);

    }
    printf("%d\n",ans);
    return 0;
}
