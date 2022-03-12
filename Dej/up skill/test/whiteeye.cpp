#include<bits/stdc++.h>
using namespace std;
stack<int> st;
int main()
{
    int n,m,i,ans=0;
    char b;
    scanf("%d %d",&n,&m);
    n+=m;
    for(i=0;i<n;i++){
        scanf(" %c",&b);
        if(b == 'A'){
        scanf("%d",&m);
        while(!st.empty() && m >= st.top()){
            st.pop();
             ans--;
        }
        st.push(m);
        ans++;
        }else{
            printf("%d\n",ans);
        }
    }
    return 0;
}
