#include<bits/stdc++.h>
using namespace std;
int a[10100];
stack<int> st;
int main()
{
    int n,i,j,t,he,ch;
    scanf("%d",&t);
    while(t--){
        he = 1;
        ch = 1;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(a[i]==he){
                he++;
            }else{
                while(!st.empty() && st.top() == he){
                    he++;
                    st.pop();
                }
                st.push(a[i]);
            }
            while(!st.empty() && st.top() == he){
                    he++;
                    st.pop();
                }
        }
        if(he != n+1){
            ch = 0;
        }
        if(ch == 1){
            printf("yes\n");
        }else{
            printf("no\n");
        }
        while(!st.empty()){
            st.pop();
        }
    }
    return 0;
}
