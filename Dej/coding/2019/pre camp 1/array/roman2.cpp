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
    int len,q,i,ans;
    scanf("%d",&q);
    while(q--){
        ans=0;
        scanf(" %s",a);
        len = strlen(a);
        i =0;
        while(i<len){
            if(a[i]=='I'){
                if(a[i+1]=='V' && i!=len-1){
                    ans+=4;
                    i+=2;
                }else if(a[i+1]=='X' &&i!=len-1){
                    ans+=9;
                    i+=2;
                }else{
                    ans+=1;
                    i++;
                }
            }else if(a[i]=='X'){
                if(a[i+1]=='L' && i!=len-1){
                    ans+=40;
                    i+=2;
                }else if(a[i+1]=='C' && i!=len-1){
                    ans+=90;
                    i+=2;
                }else{
                    ans+=10;
                    i++;
                }
            }else if(a[i]=='C'){
                if(a[i+1]=='D' && i!=len-1){
                    ans+=400;
                    i+=2;
                }else if(a[i+1]=='M'&& i!=len-1){
                    ans+=900;
                    i+=2;
                }else{
                    ans+=100;
                    i++;
                }
            }else if(a[i]=='M'){
                ans+=1000;
                i++;
            }else if(a[i]=='D'){
                ans+=500;
                i++;
            }else if(a[i]=='L'){
                ans+=50;
                i++;
            }else if(a[i]=='V'){
                ans+=5;
                i++;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
