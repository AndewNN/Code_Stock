#include<bits/stdc++.h>
using namespace std;
char a[1010],l[1010],ans[1010];
int main(){
    int n,m,i,j,c,ch=0;
    scanf("%d %d",&n,&m);
    scanf(" %s",l);
    m--;
    while(m--){
        scanf(" %s",a);
        for(i=0,c=0;i<n;i++)
            if(a[i]!=l[i])
                c++;
        if(c>2 && !ch){
            strcpy(ans,l);
            ch=1;
        }
        strcpy(l,a);
    }
    if(!ch)
        strcpy(ans,l);
    printf("%s",ans);
    return 0;
}