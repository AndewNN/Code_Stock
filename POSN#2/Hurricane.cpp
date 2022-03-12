/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
stack<pair<int,int>> st;
pair<int,int> temp;
int main()
{
    int n,a,i;
    long long ans=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&a);
        while(!st.empty()&&st.top().first<a)
        {
            ans+=st.top().second;
            st.pop();
        }

        if(!st.empty()&&st.top().first==a)
        {
            ans+=st.top().second;
            temp=st.top();
            temp.second++;
            st.pop();
        }
        else
            temp={a,1};
        if(!st.empty())
            ans++;
        st.push(temp);
    }
    printf("%lld",ans);

    return 0;
}

