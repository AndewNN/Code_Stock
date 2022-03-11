#include<bits/stdc++.h>
using namespace std;
int an[100100];
int main()
{
    int n,m,i,a,b,q;
    scanf("%d %d",&n,&m);
    while(m--){
        scanf("%d %d",&a,&b);
        an[a]+=1,an[b+1]-=1;
    }
    for(i=1;i<=n;i++){
        an[i]+=an[i-1];
    }
    scanf("%d",&q);
    while(q--){
        scanf("%d",&a);
        printf("%d\n",an[a]);
    }
    return 0;
}
