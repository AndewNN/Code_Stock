#include<bits/stdc++.h>
using namespace std;
struct A{
    int i,w;
    bool operator < (const A&o) const{
        return w < o.w;
    }
};
priority_queue<A> hp;
int mk[100100],a[100100];
int main()
{
    int n,m,i,b,ans,c,d;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
        hp.push({i,a[i]});
    }
    while(m--){
        scanf("%d",&b);
        ans = 0;
        while(!hp.empty()){
            if(mk[hp.top().i]){
                hp.pop();
            }else{
            if(hp.top().w > b){
                c = hp.top().i;
                d = hp.top().w;
                hp.pop();
                ans++;
                mk[c]=1;
                if(c-1>=1 && a[c-1] <= b && mk[c-1]==0){
                    ans++;
                    mk[c-1]=1;
                }
                if(c+1<=n && a[c+1] <= b && mk[c+1]==0){
                    ans++;
                    mk[c+1]=1;
                }
            }else{
                break;
            }
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
