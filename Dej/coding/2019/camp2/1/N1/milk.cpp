#include<bits/stdc++.h>
using namespace std;
int p[100100];
int fin(int i){
    if(p[i]==i) return i;
                return p[i] = fin(p[i]);
}
int main()
{
    int n,q,i,a,b;
    char op;
    scanf("%d %d",&n,&q);
    for(i=1;i<=n;i++){
        p[i] = i;
    }
    while(q--){
        scanf(" %c %d %d",&op,&a,&b);
        if(op=='c'){
            p[fin(a)] = fin(b);
        }else if(op=='q'){
            if(fin(a)==fin(b)){
                printf("yes\n");
            }else{
                printf("no\n");
            }
        }
    }
    return 0;
}
