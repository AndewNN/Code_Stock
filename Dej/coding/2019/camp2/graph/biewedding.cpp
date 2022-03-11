#include<bits/stdc++.h>
using namespace std;
struct A{
    int i,w;
    bool operator < (const A&o) const{
        return w > o.w;
    }
};
int dis[100];
vector<A> g[100];
priority_queue<A> hp;
int main()
{
    int q,i,c,d,e;
    char a,b;
    scanf("%d",&q);
    while(q--){
        scanf(" %c %c %d",&a,&b,&c);
        if(a >= 'a' && a <= 'z'){
            d = a-'a';
        }else{
            d = a-'A'+26;
        }
        if(b >= 'a' && b <= 'z'){
            e = b-'a';
        }else{
            e = b-'A'+26;
        }
        g[d].push_back({e,c});
        g[e].push_back({d,c});
    }
    for(i=0;i<=51;i++){
        dis[i] = 1<< 30;
    }
    dis[51]=0;
    hp.push({51,0});
    while(!hp.empty()){
           c = hp.top().i;
           d = hp.top().w;
           hp.pop();
           for(auto x:g[c]){
                if(dis[c]+x.w<dis[x.i]){
                    dis[x.i] = dis[c]+x.w;
                    hp.push({x.i,dis[x.i]});
                }
           }
    }
    c = 1<<30;
    for(i=26;i<=50;i++){
        if(dis[i]<c){
            c = dis[i];
            d = i;
        }
    }
    printf("%c %d\n",d-26+'A',c);
    return 0;
}
