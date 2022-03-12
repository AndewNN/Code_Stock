/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
char a[120];
int main()
{
    int j,i,q,state,now,len,cnt = 0;
    scanf("%d",&q);
    for(j=1;j<=q;j++){
        cnt = 0;
        scanf(" %s",a);
        len = strlen(a);
        a[len++] = '+';
        for(i=1;i<len;i++){
            if(a[i]!=a[i-1]){
                cnt++;
            }
        }
        printf("Case #%d: ",j);
        printf("%d\n",cnt);
    }
    return 0;
}
