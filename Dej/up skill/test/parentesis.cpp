 #include<bits/stdc++.h>
using namespace std;
stack<char> st;
char a[200];
int main()
{
    int n,i,len,ch;
    scanf("%d",&n);
    while(n--){
        ch = 1;
        scanf(" %s",a);
        len = strlen(a);
        for(i=0;i<len;i++){
            if(a[i]=='(' || a[i]=='['){
                st.push(a[i]);
            }else{
                if(!st.empty() && ((a[i]== ')' && st.top() == '(') ||(a[i]== ']' && st.top() == '['))){
                    st.pop();
                }else{
                    ch = 0;
                }
            }
        }
        if(!st.empty()){
            ch  = 0;
        }
        if(ch){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
        while(!st.empty()){
            st.pop();
        }
    }
    return 0;
}
