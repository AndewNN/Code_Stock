#include<bits/stdc++.h>
using namespace std;
char a[300];
stack<int> g;
int main()
{
    int len,i,ans=0;
    scanf(" %s",a);
    len = strlen(a);
    for(i=0;i<len;i++){
        if(a[i]=='('){
            g.push(1);
        }else{
            if(g.empty()){
               ans++;
            }else{
                g.pop();
            }
        }
    }
    while(!g.empty()){
        ans++;
        g.pop();
    }
    printf("%d",ans);
    return 0;
}
