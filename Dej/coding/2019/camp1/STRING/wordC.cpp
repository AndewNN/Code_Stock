/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<stdio.h>
#include<string.h>
char a[1010],b[1010],ans[1010];
int main()
{
    int l,n,i,j,cou,ch=1;
    scanf("%d %d",&l,&n);
    scanf(" %s",b);
    n--;
    while(n--){
        cou = 2;
        scanf(" %s",a);
        for(i=0;i<l;i++){
            if(a[i]!=b[i]){
                cou--;
            }
        }
        if(cou<0 && ch){
            strcpy(ans,b);
            ch = 0;
        }
        strcpy(b,a);
    }
    if(cou >=0 && ch){
        strcpy(ans,b);
    }
    for(i=0;i<l;i++){
        printf("%c",ans[i]);
    }
    return 0;
}
