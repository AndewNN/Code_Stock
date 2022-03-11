/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
char a[1000],b[1000],ans[1000];
int main()
{
    int len,x,i,s1,s2,j,ca=0;
    scanf("%d %s %s",&x,a,b);
    s1 = s2 = 0;
    len = strlen(a);
    for(i=0;i<len;i++){
        s1*=x;
        if(a[i]=='F'){
            s1+=15;
        }else if(a[i]=='E'){
            s1+=14;
        }else if(a[i]=='D'){
            s1+=13;
        }else if(a[i]=='C'){
            s1+=12;
        }else if(a[i]=='B'){
            s1+=11;
        }else if(a[i]=='A'){
            s1+=10;
        }else{
            s1+=a[i]-'0';
        }
    }
    len = strlen(b);
    for(i=0;i<len;i++){
        s2*=x;
        if(b[i]=='F'){
            s2+=15;
        }else if(b[i]=='E'){
            s2+=14;
        }else if(b[i]=='D'){
            s2+=13;
        }else if(b[i]=='C'){
            s2+=12;
        }else if(b[i]=='B'){
            s2+=11;
        }else if(b[i]=='A'){
            s2+=10;
        }else{
            s2+=b[i]-'0';
        }
    }
    j = s1+s2;
    printf("%d\n",s1+s2);
    while(j>0){
        if(j%x>=10){
            if(j%x==15){
                ans[ca]='F';
            }else if(j%x==14){
                ans[ca]='E';
            }else if(j%x==13){
                ans[ca]='D';
            }else if(j%x==12){
                ans[ca]='C';
            }else if(j%x==11){
                ans[ca]='B';
            }else if(j%x==10){
                ans[ca]='A';
            }
        }else{
        ans[ca]=(j%x)+'0';
        }
        j/=x;
        ca++;
    }
    for(i=ca-1;i>=0;i--){
        printf("%c",ans[i]);
    }
    return 0;
}
