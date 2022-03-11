/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>;
char s[20];
int main()
{
    int a,len,i,ans;
    scanf("%d",&a);
    while(a--){
        scanf(" %s",s);
        len = strlen(s);
        ans = 0;
        for(i=0;i<len;i++){
            if(s[i]=='J'){
                ans+=1;
            }else if(s[i]=='Q'){
                ans+=2;
            }else if(s[i]=='K'){
                ans+=3;
            }else if(s[i]=='A'){
                ans+=4;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
