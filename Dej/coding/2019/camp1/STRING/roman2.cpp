/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<stdio.h>
#include<string.h>
char a[100];
int main()
{
    int q,len,i,ans;
    scanf("%d",&q);
    while(q--){
        ans = 0;
        scanf(" %s",a);
        len = strlen(a);
        for(i=0;i<len;){
            if(a[i]=='C' && a[i+1] == 'M'){
                i+=2;
                ans+=900;
            }else if(a[i]=='M'){
                i++;
                ans+=1000;
            }else if(a[i]=='C' && a[i+1] == 'D'){
                i+=2;
                ans+=400;
            }else if(a[i]=='C'){
                i++;
                ans+=100;
            }else if(a[i]=='D'){
                i++;
                ans+=500;
            }else if(a[i]=='X' && a[i+1] == 'C'){
                i+=2;
                ans+=90;
            }else if(a[i]=='L'){
                i++;
                ans+=50;
            }else if(a[i]=='X' && a[i+1] == 'L'){
                i+=2;
                ans+=40;
            }else if(a[i]=='X'){
                i++;
                ans+=10;
            }else if(a[i]=='I' && a[i+1] == 'X'){
                i+=2;
                ans+=9;
            }else if(a[i]=='V'){
                i++;
                ans+=5;
            }else if(a[i]=='I' && a[i+1] == 'V'){
                i+=2;
                ans+=4;
            }else if(a[i]=='I'){
                i++;
                ans+=1;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
