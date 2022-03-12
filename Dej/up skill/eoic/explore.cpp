#include<bits/stdc++.h>
using namespace std;
int bl[500100],mk[500100];
queue<int> qu;
vector<int> wp[1000100];
int main()
{
    int n,m,k,a,b,ma=-10;
    scanf("%d %d %d",&n,&m,&k);
    while(m--){
        scanf("%d %d",&a,&b);
        wp[a].push_back(b);
    }
    while(k--){
        scanf("%d",&a);
        bl[a] = 1;
    }
    qu.push(1);
    while(!qu.empty()){
        a = qu.front();
        qu.pop();
        if(a<=n){
        ma = max(a,ma);
        if(bl[a]!=1 && mk[a+1]!=1){
            qu.push(a+1);
            mk[a+1]=1;
        }
        for(auto x : wp[a]){
            if(x!=0 && mk[x]!=1){
                qu.push(x);
                mk[x]=1;
            }
        }
        }
    }
    if(ma == n){
        printf("1\n");
    }else{
        printf("0 %d\n",ma);
    }
    return 0;
}
