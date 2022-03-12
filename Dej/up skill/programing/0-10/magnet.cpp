#include<bits/stdc++.h>
using namespace std;
struct A{
    int num,ty;
    bool operator < (const A &o) const{
        if(num != o.num) return num > o.num;
        else   return ty > o.ty;
    }
};
priority_queue<A> he;
int main()
{
    int n,i,x,y,cou=0,ans=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        he.push({x,0});
        he.push({y,1});
    }
    while(!he.empty()){
        x = he.top().num;
        y = he.top().ty;
        he.pop();
        if(y==0){
            cou++;
        }else{
            cou--;
            ans+=cou;
        }
    }
    printf("%d\n",ans);
    return 0;
}
