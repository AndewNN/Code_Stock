/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[5];
char s[110];
int main()
{
    int len,k,i,j,x=0,y=0,op,ch1=1,ch2=1;
    scanf(" %s",s);
    len = strlen(s);
    scanf("%d",&k);
    op = k;
    for(i=0;i<len;i++){
        if(s[i]=='N'){
            a[0]++;
            y++;
        }else if(s[i]=='E'){
            a[1]++;
            x++;
        }else if(s[i]=='S'){
            a[2]++;
            y--;
        }else if(s[i]=='W'){
            a[3]++;
            x--;
        }
    }
    if(a[0]>=a[2]){
        if(a[2]-k>=0){
            y+=k;
            k=0;
        }else{
            k-=a[2];
            y+=a[2];
        }
    }else if(a[0]<a[2]){
        ch1 = 0;
        if(a[0]-k>=0){
            y-=k;
            k=0;
        }else{
            k-=a[0];
            y-=a[0];
        }
    }
    if(a[1]>=a[3]){
        if(a[3]-k>=0){
            x+=k;
            k=0;
        }else{
            k-=a[3];
            x+=a[3];
        }
    }else if(a[1]<a[3]){
        ch2 = 0;
        if(a[1]-k>=0){
            x-=k;
            k=0;
        }else{
            k-=a[1];
            x-=a[1];
        }
    }
    if(k>0){
        if(ch1){
            if(a[0]-k>=0){
                y-=k;
                k=0;
            }else{
                y-=a[0];
                k-=a[0];
            }
        }else{
            if(a[2]-k>=0){
                y+=k;
                k=0;
            }else{
                y+=a[2];
                k-=a[2];
            }
        }
        if(ch2){
            if(a[1]-k>=0){
                x-=k;
                k=0;
            }else{
                x-=a[1];
                k-=a[1];
            }
        }else{
            if(a[3]-k>=0){
                x+=k;
                k=0;
            }else{
                x+=a[3];
                k-=a[3];
            }
        }
    }
    if(len == op){
        printf("0\n");
    }else{
    printf("%d\n",2*(abs(x)+abs(y)));
    }
    return 0;
}
