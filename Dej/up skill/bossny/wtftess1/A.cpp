#include<bits/stdc++.h>
using namespace std;
priority_queue<int> hp;
int main()
{
    int q,a,b,c;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d %d",&a,&b,&c);
        hp.push(a);
        hp.push(b);
        hp.push(c);
        a = hp.top();
        hp.pop();
        b = hp.top();
        hp.pop();
        c = hp.top();
        hp.pop();
        if(a-1 <= b+c){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
    return 0;
}
