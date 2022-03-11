/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
char a[5100],b[5100];
int ans[10100];
int main()
{
    int ami=0,bmi=0,lena,lenb,cn=0,i,j,t=0,x,n;
    scanf(" %s %s",a,b);
    if(a[0]=='-'){
        ami = 1;
        strcpy(a,&a[1]);
    }
    if(b[0]=='-'){
        bmi = 1;
        strcpy(b,&b[1]);
    }
    lena = strlen(a);
    lenb = strlen(b);
    for(i=lena-1;i>=0;i--){
        for(j=lenb-1,n=0;j>=0;j--){
            ans[cn+n] += (a[i]-'0')*(b[j]-'0');
            n++;
        }
        cn++;
    }
    for(i=0;i<cn+n-1;i++){
        x = (ans[i]+t);
        ans[i] = x%10;
        t = x/10;
    }
    while(t>0 ){
        ans[i] = t%10;
        t/=10;
        i++;
    }
    if(a[0]=='0' || b[0]=='0'){
        printf("0");
    }else{
    if(ami!=bmi){
        printf("-");
    }
    for(i-=1;i>=0;i--){
        printf("%d",ans[i]);
    }
    }
    return 0;
}
