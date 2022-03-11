/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int l[500010],r[500010];
int main(){
    int x,y,n,k,i;
    char opr;
    scanf("%d %d",&n,&k);
    for(i=0;i<=n;i++) l[i] = i-1,r[i] = i+1;
    while(k--){
        scanf(" %c %d %d",&opr,&x,&y);
        r[l[x]] = r[x];
        l[r[x]] = l[x];
        if(opr == 'A'){
            r[l[y]] = x;
            l[x] = l[y];
            r[x] = y;
            l[y] = x;
        }
        else{
            l[r[y]] = x;
            r[x] = r[y];
            l[x] = y;
            r[y] = x;
        }
    }
    int now = r[0];
    for(int i=1;i<=n;i++){
        printf("%d ",now);
        now = r[now];
    }
    return 0;
}
