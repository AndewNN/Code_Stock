#include<bits/stdc++.h>
using namespace std;
int dat[1100];
char opr;
queue<int> qu[12],idx;
int main()
{
    int nc,ns,a,b,i;
    scanf("%d %d",&nc,&ns);
    for(i=0;i<ns;i++){
        scanf("%d %d",&a,&b);
        dat[b] = a;
    }
    while(1){
        scanf(" %c",&opr);
        if(opr == 'X'){
            printf("0\n");
            break;
        }else if(opr == 'E'){
            scanf("%d",&a);
            if(qu[dat[a]].empty()){
                qu[dat[a]].push(a);
                idx.push(dat[a]);
            }else{
                qu[dat[a]].push(a);
            }
        }else{
            while(!idx.empty() && qu[idx.front()].empty()){
                idx.pop();
            }
            if(idx.empty()){
                printf("empty\n");
            }else{
            printf("%d\n",qu[idx.front()].front());
            qu[idx.front()].pop();
            }
            while(!idx.empty() &&qu[idx.front()].empty()){
                idx.pop();
            }
        }
    }
    return 0;
}
