#include<bits/stdc++.h>
using namespace std;
vector<int> g[1100];
int mk[1100],ch,a,b;
void p(int k){
    if(k == b){
        ch = 0;
    }
    if(ch == 0 || mk[k]==1){
        return ;
    }
    mk[k]=1;
    for(auto x: g[k]){
        p(x);
    }
}
int main()
{
    int i,n,m,q;
    scanf("%d %d %d",&n,&m,&q);
    for(i=0;i<m;i++){
        scanf("%d %d",&a,&b);
        g[a].push_back(b);
    }
    while(q--){
        scanf("%d %d",&a,&b);
        ch = 1;
        p(a);
        if(ch){
            printf("No\n");
        }else{
            printf("Yes\n");
        }
        memset(mk,0,sizeof mk);
    }
    return 0;
}
