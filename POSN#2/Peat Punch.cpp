/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
#define PI pair<int,int> //high , power
stack<PI> st;
int a[100100],p[100100];
int main()
{
    int l,q,i,h,po,g,mx,n;
    scanf("%d %d",&l,&q);
    for(i=0; i<l; i++)
        scanf("%d",&a[i]);
    for(i=0; i<l; i++)
    {
        if(!st.empty() && st.top().first>a[i])
        {
            while(!st.empty() && st.top().first>a[i])
                st.pop();
            mx=0;
        }
        if(st.empty())
        {
            st.push({a[i],0});
            p[i]=0,mx=0;
            continue;
        }
        mx=max(mx,a[i]-st.top().first);
        st.push({a[i],mx});
        p[i]=mx;
        continue;

    }
    sort(p,p+l);
    while(q--)
    {
        scanf("%d",&n);
        printf("%d\n",&p[l]-upper_bound(p,p+l,n));

    }
    return 0;
}
/*

5 2
1 3 4 2 3


*/
