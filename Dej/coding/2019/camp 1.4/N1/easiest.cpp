#include<bits/stdc++.h>
using namespace std;
priority_queue<int > hp;
int main()
{
    int q,i;
    char o;
    scanf("%d",&q);
    while(q--){
        scanf(" %c",&o);
        if(o=='A'){
            scanf("%d",&i);
            hp.push(-i);
        }else{
            if(!hp.empty()){
            printf("%d\n",hp.top()*-1);
            hp.pop();
            }else{
                printf("-1\n");
            }
        }
    }
    return 0;
}
