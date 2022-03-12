#include<bits/stdc++.h>
using namespace std;
int p[100100];
int play(int j){
    if(p[j]==j){
        return j;
    }
    return p[j] = play(p[j]);
}
int main()
{
    int n,q,i,a,b;
    char opr;
    scanf("%d %d",&n,&q);
    for(i=1;i<=n;i++){
        p[i]=i;
    }
    while(q--){
        scanf(" %c %d %d",&opr,&a,&b);
        if(opr == 'q'){
            if(p[play(a)]==p[play(b)]){
                printf("yes\n");
            }else{
                printf("no\n");
            }
        }else if(opr == 'c'){
            p[play(b)] = p[play(a)];
        }
    }
    return 0;
}
