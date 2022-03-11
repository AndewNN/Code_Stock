#include<bits/stdc++.h>
using namespace std;
struct A{
    int x,id;
    bool operator < (const A & o) const{
        return x > o.x;
    }
};
int a[1100];
priority_queue<A> hp;
queue<A> q;
int main()
{
    int n,i,b,c,st,d;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&b);
        c = i;
        st = 0;
        if(!hp.empty() && hp.top().x == 0){
            d = b;
            while(!hp.empty() && hp.top().x <= b){
                q.push({b+1,hp.top().id});
                b++;
                hp.pop();
            }
            hp.push({d,c});
            while(!q.empty()){
                hp.push({q.front().x,q.front().id});
                q.pop();
            }
        }else{
            while(!hp.empty() && st + b >= hp.top().x){
              //  printf("dh %d %d\n",hp.top().x-1,c);
                q.push({hp.top().x-1,c});
                st = hp.top().x;
                c = hp.top().id;
                b = b - hp.top().x - 1;
                b = max(b,0);
                hp.pop();
            }
            hp.push({st+b,c});
            while(!q.empty()){
                hp.push({q.front().x,q.front().id});
               // printf("sk %d %d",q.front().x,q.front().id);
                q.pop();
            }
        }
      //  printf("ch %d %d\n",hp.top().id,hp.top().x);
    }
    while(!hp.empty()){
        a[hp.top().id] = hp.top().x;
        hp.pop();
    }
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}
