#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,a,b;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&a,&b);
        printf("%d\n",(24-a)*60-b);
    }
    return 0;
}
