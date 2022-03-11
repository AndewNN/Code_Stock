/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
stack<char> st;
char a[130];
int main()
{
    int q,i,len,ch;
    scanf("%d",&q);
    while(q--){
        scanf(" %s",a);
        len = strlen(a);
        ch = 1;
        for(i=0;i<len;i++){
            if(a[i]=='('||a[i]=='['){
                st.push(a[i]);
               }else{
                    if(st.empty()){
                        ch = 0;
                    }else{
                        if((st.top()=='('&&a[i]==')')||(st.top()=='['&&a[i]==']')){
                            st.pop();
                        }else{
                            ch = 0;
                        }
                    }
               }
        }
        if(ch && st.empty()){
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
