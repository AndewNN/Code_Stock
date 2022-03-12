#include<bits/stdc++.h>
using namespace std;
vector<int> g[100100];
int in[100100],out[100100];
void pp(int nb){
    in[nb]--;
    if(in[nb]<=0){
        for(auto x : g[nb]){
        pp(x);
    }
    }
}
void p(int na){
    if(in[na]!=0){
    in[na]=0;
    for(auto x : g[na]){
        pp(x);
    }
    }
}
int main()
{
    int a,b,n,k,q,i,opr;
    scanf("%d %d %d",&n,&k,&q);
    for(i=0;i<k;i++){
        scanf("%d %d",&a,&b);
        g[a].push_back(b);
        in[b]++;
        out[a]++;
    }
    while(q--){
        scanf("%d",&opr);
        if(opr == 1){
            scanf("%d",&a);
            p(a);
        }else{
            scanf("%d",&a);
            if(in[a]==0){
                printf("0\n");
            }else{
                printf("1\n");
            }
        }
    }
    return 0;
}
