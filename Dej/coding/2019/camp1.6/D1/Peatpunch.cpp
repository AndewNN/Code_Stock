#include<bits/stdc++.h>
using namespace std;
stack<pair<int,int> > st;
int a[100100];
int main()
{
    int l,q,i,b,ans,c;
    scanf("%d %d",&l,&q);
    for(i=0;i<l;i++){
        scanf("%d",&b);
        while(!st.empty() && b < st.top().first) st.pop();
        if(st.empty())  c = 0;
        else            c = max(st.top().second,b - st.top().first);
        a[i] = c;
        st.push({b,c});
    }
    sort(a,a+l);
    while(q--){
        scanf("%d",&b);
        printf("%d\n",l-(upper_bound(a,a+l,b)-a));
    }
    return 0;
}
