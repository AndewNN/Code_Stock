#include<bits/stdc++.h>
using namespace std;
struct A{
    int w,i;
    bool operator < (const A&o)const{
        if(w!=o.w)
            return w<o.w;
    }
};
priority_queue<A> q;
int main(){
    int n=5,i,w,j;
    for(j=0;j<n;j++){
        scanf("%d %d",&w,&i);
        q.push({w,i});
    }
    while(!q.empty()){
        printf("%d ",q.top().i);
        q.pop();
    }
}
/*

8 1
4 2
3 6
6 7
7 5

*/
