#include<bits/stdc++.h>
using namespace std;
vector<int> g[100100];
int in[100100],an[100100];
priority_queue<int> hp;
void p(int z){
    for(auto x: g[z]){
        in[x]--;
        if(in[x]==0){
            hp.push(-x);
        }
    }
}
int main()
{
    int q,n,m,i,a,b,cou=0;
    scanf("%d",&q);
    while(q--){
        cou = 0;
        scanf("%d %d",&n,&m);
        while(m--){
            scanf("%d %d",&a,&b);
            g[a].push_back(b);
            in[b]++;
        }
        for(i=1;i<=n;i++){
            if(in[i]==0){
                hp.push(-i);
            }
        }
        while(!hp.empty()){
            a = hp.top() * (-1);
            hp.pop();
            an[cou] = a;
            cou++;
            p(a);
        }
        if(cou!=n){
            printf("No\n");
        }else{
            printf("Yes ");
            for(i=0;i<cou;i++){
                printf("%d ",an[i]);
            }
            printf("\n");
        }
    while(!hp.empty()){
        hp.pop();
    }
    for(i=0;i<=n;i++){
        g[i].clear();
    }
    memset(in,0,sizeof in);
    }
    return 0;
}
