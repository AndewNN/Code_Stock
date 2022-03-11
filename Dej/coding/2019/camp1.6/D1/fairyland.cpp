#include<bits/stdc++.h>
using namespace std;
int p[100100];
int play(int a){
    if(p[a]==a){
        return a;
    }
    return p[a] = play(p[a]);
}
int main()
{
    int n,m,q,i,a,b;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
        p[i]=i;
    }
    while(m--){
        scanf("%d %d",&a,&b);
        p[play(a)] = play(b);
    }
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&a,&b);
        if(p[play(a)]==p[play(b)]){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}
