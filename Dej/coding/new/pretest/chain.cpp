/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
char str[1010],s[1010],ans[1010];
int main()
{
    int i,l,n,cou,ch=1;
    scanf("%d %d",&l,&n);
    scanf(" %s",str);
    n-=1;
    while(n--){
        scanf(" %s",s);
        for(i=0,cou=2;i<l;i++){
            if(str[i]!=s[i]){
                cou--;
            }
        }
        if(cou>=0){
            strcpy(str,s);
        }else if(ch){
            strcpy(ans,str);
            ch = 0;
        }
    }
    if(!ch){
    printf("%s",ans);
    }else{
    printf("%s",str);
    }
    return 0;
}
