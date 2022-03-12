#include<bits/stdc++.h>
using namespace std;
int p[100100],o[100100];
stack< pair<int,int> > st;
int main()
{
    int l,q,i,a;
    scanf("%d %d",&l,&q);
    for(i=0;i<l;i++){
        scanf("%d",&p[i]);
    }
    st.push({0,p[0]});
    o[0] = 0;
    for(i=1;i<l;i++){
        while(!st.empty() && st.top().second > p[i]){
            st.pop();
        }
        if(st.empty()){
            o[i] = 0;
            st.push({0,p[i]});
        }else{
            o[i] = max(st.top().first,p[i]-st.top().second);
            st.push({o[i],p[i]});
        }
    }
    sort(o,o+l);
    while(q--){
        scanf("%d",&a);
        printf("%d\n",l-(upper_bound(o,o+l,a)-o));
    }
    return 0;
}
