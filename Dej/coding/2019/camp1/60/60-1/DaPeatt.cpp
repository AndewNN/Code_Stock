/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
char a[100];
int main()
{
    int q,i,j,len,c,sum,ch;
    scanf("%d",&q);
    while(q--){
        scanf(" %s",a);
        c=1;
        ch=1;
        len = strlen(a);
        for(i=len-1,sum=0;i>=len%3;i-=3){
            if(c==1){
                j = 100*(a[i-2]-'0')+10*(a[i-1]-'0')+(a[i]-'0');
                sum+=j;
                c=0;
            }else{
                j = 100*(a[i-2]-'0')+10*(a[i-1]-'0')+(a[i]-'0');
                sum-=j;
                c=1;
            }
        }
        if(len%3==2){
            if(c==1){
                j = 10*(a[0]-'0')+(a[1]-'0');
                sum+=j;
                c=0;
            }else{
                j = 10*(a[0]-'0')+(a[1]-'0');
                sum-=j;
                c=1;
            }
        }else if(len%3==1){
            if(c==1){
                j = (a[0]-'0');
                sum+=j;
                c=0;
            }else{
                j = a[0]-'0';
                sum-=j;
                c=1;
            }
        }
        if(sum%7==0){
            printf("7 * %d\n",sum/7);
            ch = 0;
        }
        for(i=len-1,sum=0,c=1;i>=0;i--){
            if(c==1){
                j = (a[i]-'0');
                sum+=j;
                c=0;
            }else{
                j = (a[i]-'0');
                sum-=j;
                c=1;
            }
        }
        if(sum%11==0){
            printf("11 * %d\n",sum/11);
            ch = 0;
        }
        for(i=len-1,sum=0;i>=len%2;i-=2){
            j = 10*(a[i-1]-'0')+a[i]-'0';
            sum+=j;
        }
        if(len%2==1){
            sum+=a[0]-'0';
        }
        if(sum%99==0){
            printf("99 * %d\n",sum/99);
            ch = 0;
        }
        if(ch){
            printf("%s\n",a);
        }
    }
    return 0;
}
