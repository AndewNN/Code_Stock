#include<bits/stdc++.h>
using namespace std;
stack<int> st;
int p[10100],mk[10100];
vector<int> g[10100];
int fr(int a){
    if(p[a]==a){
        return a;
    }
    return p[a] = fr(p[a]);
}
int main()
{
    int n,m,i,a,b,j,c;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
        p[i] = i;
        scanf("%d",&a);
        for(j=1;j<=a;j++){
            scanf("%d",&b);
            g[i].push_back(b);
        }
    }
    for(i=1;i<=n;i++){
        for(auto x: g[i]){
            st.push(x);
        }
        if(!st.empty()){
        c = st.top();
        c = fr(c);
        st.pop();
        }
        while(!st.empty()){
            p[fr(st.top())] = c;
            st.pop();
        }
    }
    for(i=1;i<=n;i++){
        c = fr(i);
        mk[c]++;
    }
    c=0;
    for(i=1;i<=m;i++){
        if(mk[i]>0){
            c++;
        }
    }
    printf("%d\n",c-1);
    return 0;
}
/*
8 7
0
3 1 2 3
1 1
2 5 4
2 6 7
1 3
2 7 4
1 1
*/
