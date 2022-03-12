/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int p[2100];
int main()
{
    int q,n,i,j;
    p[0] = 1;
    for(i=1;i<=2000;i++){
        for(j=2000;j>=i;j--){
            p[j]+=p[j-i],p[j]%=1000003;
        }
    }
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        printf("%d\n",p[n]);
    }
    return 0;
}
