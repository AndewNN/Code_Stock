#include<bits/stdc++.h>
using namespace std;
long long p[2000100];
stack<int> st;
int main()
{
    long long l,r,mid,n,i,tm,ch;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld",&p[i]);
    }
    l=0,r=2147483648;
    while(l<r){
        mid = (l+r)/2;
        ch = 1;
        for(i=1;i<=n;i++){
            if(p[i]>mid){
                if(!st.empty() && st.top() == p[i]){
                    st.pop();
                }else if(st.empty()){
                    st.push(p[i]);
                }else{
                    ch = 0;
                }
            }
        }
        if(ch)  r = mid;
        else    l = mid+1;
        while(!st.empty()){
            st.pop();
        }
    }
    printf("%lld\n",l);
    return 0;
}
