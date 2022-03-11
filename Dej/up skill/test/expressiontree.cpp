#include<bits/stdc++.h>
using namespace std;
char str[300];
int l[300],r[300],stnode;
stack<int> st;
void inf(int i){
    if(str[i]==NULL) return;
    if(!isalpha(str[i])){
        printf("(");
    }
    if(l[i]!=-1){
        inf(l[i]);
    }
    printf("%c",str[i]);
    if(r[i]!=-1){
        inf(r[i]);
    }
    if(!isalpha(str[i])){
        printf(")");
    }
}
void pre(int i){
    if(str[i]==NULL) return;
    printf("%c",str[i]);
    if(l[i]!=-1){
        pre(l[i]);
    }
    if(r[i]!=-1){
        pre(r[i]);
    }
}
int main()
{
    memset(l,-1,sizeof l);
    memset(r,-1,sizeof r);
    int len,i,a,b;
    gets(str);
    len = strlen(str);
    for(i=0;i<len;i++){
        if(str[i]==' '){
            continue;
        }
        if(isalpha(str[i])){
            st.push(i);
        }else if(str[i]=='+' || str[i]=='-' ||str[i]=='*' ||str[i]=='/'){
            a = st.top();
            st.pop();
            b = st.top();
            st.pop();
            l[i] = b;
            r[i] = a;
            st.push(i);
        }
    }
    stnode = st.top();
    inf(stnode);
    printf("\n");
    pre(stnode);
    printf("\n");
    return 0;
}
