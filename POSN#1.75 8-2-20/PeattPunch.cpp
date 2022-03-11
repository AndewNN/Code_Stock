/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;
stack<PII> st;
int a[100100];
int main()
{
	int l,q,power,i,h;
	scanf("%d %d",&l,&q);
	for(i=0;i<l;i++)
    {
        scanf("%d",&h);
        while(!st.empty()&&h<st.top().first)
            st.pop();
        if(st.empty())
            power=0;
        else
            power=max(st.top().second,h-st.top().first);
        a[i]=power;
        st.push(make_pair(h,power));
    }
    sort(a,a+l);
    while(q--)
    {
        scanf("%d",&h);
        printf("%d\n",l-(upper_bound(a,a+l,h)-a));
    }
    return 0;
}
