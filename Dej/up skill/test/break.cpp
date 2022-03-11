#include<bits/stdc++.h>
using namespace std;
stack<pair<int,int> > st;
int main()
{
    int q,a,b;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&a,&b);
        if(st.empty() || a <= st.top().first){
            st.push(make_pair(a,b));
        }else{
            while(!st.empty() && a > st.top().first){
                printf("%d\n",st.top().second);
                st.pop();
            }
            st.push(make_pair(a,b));
        }
    }
    return 0;
}
