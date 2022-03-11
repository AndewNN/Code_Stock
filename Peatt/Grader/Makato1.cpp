/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int qs[100100];
int main()
{
    int n,q,i,k,a,b;
    scanf("%d %d",&n,&q);
    for(i=1;i<=n;i++){
        scanf("%d",&k);
        qs[i]=qs[i-1]^k;
    }
    while(q--){
        scanf("%d %d",&a,&b);
        printf("%d\n",qs[b]^qs[a-1]);
    }
    return 0;
}
