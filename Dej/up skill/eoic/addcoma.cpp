#include<bits/stdc++.h>
using namespace std;
char a[110];
int main()
{
    int q,i,len;
    scanf("%d",&q);
    while(q--){
        scanf(" %s",a);
        len = strlen(a);
        if(len%3!=0){
            if(len%3==1){
                printf("%c",a[0]);
            }else{
                printf("%c%c",a[0],a[1]);
            }
        }
        for(i=len%3;i<len;i+=3){
            if(i==0){
                printf("%c%c%c",a[i],a[i+1],a[i+2]);
            }else{
                printf(",%c%c%c",a[i],a[i+1],a[i+2]);
            }

        }
    }
    return 0;
}
