#include<bits/stdc++.h>
using namespace std;
stack<char> st;
char a,an[100100];
int main()
{
    int n,len=0,i;
    scanf("%d",&n);
    while(n--){
        scanf(" %c",&a);
        if(!st.empty() && a == st.top()){
            st.pop();
        }else{
            st.push(a);
        }
    }
    if(st.empty()){
        printf("0\nempty");
    }else{
        while(!st.empty()){
            an[len] = st.top();
            len++;
            st.pop();
        }
        printf("%d\n",len);
        for(i=0;i<len;i++){
            printf("%c",an[i]);
        }
    }
    return 0;
}
