/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
long long a[2000100];
stack<long long> st;
int main()
{
    long long n,i,r,l,mid;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
    l=0;
    r=2150000000;
    while(l<r)
    {
        mid=(l+r)/2;
        if(a[0]>mid)
            st.push(a[0]);
        for(i=1;i<n;i++)
        {
            if(a[i]<=mid)
                continue;
            if(!st.empty()&&(a[i]==st.top()))
            {
                st.pop();
                st.push(-1);
                continue;
            }
            st.push(a[i]);
        }
        while(!st.empty()&&st.top()==-1)
            st.pop();
        if(!st.empty())
            l=mid+1;
        else if(st.empty())
            r=mid;
        while(!st.empty())
            st.pop();
    }
    printf("%lld",l);



    return 0;
}
/*

6
3 3 2 5 5 2

6
3 5 2 2 5 3

**/
