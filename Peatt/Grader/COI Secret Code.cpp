/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int kmp[1000010],jump[1000010];
char a[1000010],b[1000010],ans[1000010];
int main()
{
    int q,n,m,i,j,pt;
    scanf("%d",&q);
    while(q--){
        scanf(" %s %s",a+1,b+1);
        n=strlen(a+1),m=strlen(b+1);
        for(i=2,j=0;i<=m;i++){
            while(j>0 && b[i]!=b[j+1]) j=kmp[j];
            if(b[i]==b[j+1]) j++;
            kmp[i]=j;
        }
        for(i=1,j=0,pt=0;i<=n;i++){
            while(j>0 && a[i]!=b[j+1]) j=kmp[j];
            if(a[i]==b[j+1]) j++;
            ans[++pt]=a[i];
            jump[pt]=j;
            if(j==m){
                pt-=m;
                j=jump[pt];
            }
        }
        if(pt!=0){
            ans[pt+1]='\0';
            printf("%s\n",ans+1);
        }
        else{
            printf("No COI Secret Code\n");
        }
    }
    return 0;
}
/*

3
codecodecubecodecubecute
codecube

*/
