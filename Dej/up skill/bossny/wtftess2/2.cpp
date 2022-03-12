#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,a,b,sum,c;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&a,&b);
        c = (a/b)*b;
        sum = c + (b/2);
        sum = min(sum,a);
        printf("%d\n",sum);
    }
    return 0;
}
