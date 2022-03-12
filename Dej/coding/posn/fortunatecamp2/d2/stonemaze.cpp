/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
char a;
int main()
{
    int q,i,j,r,c,ans;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&r,&c);
        ans = 0;
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                scanf(" %c",&a);
                if(a=='.') ans++;
            }
        }
        printf("%d\n",2*(ans-1));
    }
    return 0;
}
