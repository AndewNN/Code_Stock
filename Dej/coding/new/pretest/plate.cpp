/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int n[10100];
char c;
queue<int> qu[20],q;
int main()
{
    int i,a,b,ns,nc,last=0,id,now;
    scanf("%d %d",&ns,&nc);
    for(i=0;i<nc;i++){
        scanf("%d %d",&a,&b);
        n[b] = a;
    }
    while(1){
        scanf(" %c",&c);
        if(c=='E'){
            scanf("%d",&id);
            if(q.empty()){
                q.push(n[id]);
                last = n[id];
                qu[n[id]].push(id);
            }else if(last == n[id]){
                qu[n[id]].push(id);
            }else{
                if(qu[n[id]].empty()){
                    q.push(n[id]);
                    last = n[id];
                }
                qu[n[id]].push(id);
            }
        }else if(c=='D'){
            now = q.front();
            if(qu[now].empty()){
                q.pop();
                now = q.front();
            }
            printf("%d\n",qu[now].front());
            qu[now].pop();
            if(qu[now].empty()){
                q.pop();
            }
        }else{
            printf("0\n");
            break;
        }
    }
    return 0;
}
