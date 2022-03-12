#include<bits/stdc++.h>
using namespace std;
priority_queue<int> q;
int main(){
    int n=10,i,cou=1,t;
    while(n--){
        scanf("%d",&i);
        q.push(i%42);
    }
    t=q.top();
    q.pop();
    while(!q.empty()){
        i=q.top();
        q.pop();
        if(i==t)
            continue;
        t=i,cou++;
    }
    printf("%d",cou);


}
