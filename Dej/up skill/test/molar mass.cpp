#include<bits/stdc++.h>
using namespace std;
stack<int> st;
char a[110];
int main()
{
    int q,len,i,j,sum;
    scanf("%d",&q);
    while(q--){
        scanf(" %s",a);
        len = strlen(a);
        for(i=0;i<len;i++){
            if(a[i]== 'C'){
                st.push(12);
            }else if(a[i]== 'O'){
                st.push(16);
            }else if(a[i]== 'H'){
                st.push(1);
            }else if(isdigit(a[i])){
                j = st.top();
                st.pop();
                j *= (a[i]-'0');
                st.push(j);
            }else if(a[i]== '('){
                st.push(-100);
            }else if(a[i]== ')'){
                sum = 0;
                while(st.top()!=-100){
                    j = st.top();
                    st.pop();
                    sum += j;
                }
                st.pop();
                st.push(sum);
            }
        }
        sum = 0;
        while(!st.empty()){
            sum += st.top();
            st.pop();
        }
        printf("%d\n",sum);
    }
    return 0;
}
