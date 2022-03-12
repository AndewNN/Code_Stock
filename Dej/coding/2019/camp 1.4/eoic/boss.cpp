#include<bits/stdc++.h>
using namespace std;
int a[100100],b[100100],c[100100];
struct A{
    int no,id,st,hate,idh;
    bool operator < (const A & o) const{
        if(id!=o.id) return id > o.id;
        else         return idh < o.idh;
    }
};
priority_queue<A> hp;
queue<A> ans;
int main()
{
    int n,m,i,x,sum=0,y;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        scanf("%d",&x);
        hp.push({a[i],i,x,0,0});
        b[a[i]] = i;
    }
    for(i=1;i<=m;i++){
        scanf("%d %d",&x,&y);
        b[x] = b[y];
        c[y]++;
        hp.push({x,b[y],100100,1,c[y]});
    }
    while(!hp.empty()){
        if(hp.top().st<=sum){
            hp.pop();
        }else{
            sum+=hp.top().hate;
            ans.push(hp.top());
            hp.pop();
        }
     /*   printf("aa %d\n",hp.top().no);
        hp.pop(); */
    }
    printf("%d\n",ans.size());
    while(!ans.empty()){
        printf("%d ",ans.front().no);
        ans.pop();
    }
    return 0;
}
