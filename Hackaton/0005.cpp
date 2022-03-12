/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
char a[20];
int aa[20];
int main()
{
    int n,i,l,ca=0,cb=0,xx=1,xx2=1,ls=-10,xx3=1;
    gets(a+1);
    l=strlen(a+1);
    for(i=1;i<=l;i++){
        if(a[i]-'0'>=0&&a[i]-'0'<=9)
            aa[i]=a[i]-'0',ca++;
        else if(a[i]=='-'){
            aa[i]=-1,cb++;
            if(i-ls==1)
                xx2=0;
            ls=i;
            if(i==1||i==2||i==l)
                xx3=0;
        }
        else
            aa[i]=-10,xx=0;
    }
    if(ca<10){
        printf("Invalid : too short");
        return 0;
    }
    if(ca>10){
        printf("Invalid : too many digits");
        return 0;
    }
    if( aa[1]!=0 || !(aa[2]==1 || aa[2]==5 || aa[2]==6 || aa[2]==8 || aa[2]==9)){
        if(aa[1]>=0&&aa[1]<=9 && aa[2]>=0&&aa[2]<=9){
            printf("Invalid : wrong prefix");
            return 0;
        }
    }
    if(!xx){
        printf("Invalid : alphabetic");
        return 0;
    }
    if(!xx2){
        printf("Invalid : two dashes together");
        return 0;
    }
    if(!xx3){
        printf("Invalid : wrong dash position");
        return 0;
    }
    if(cb>2){
        printf("Invalid : too many dashes");
        return 0;
    }
    else
        printf("Valid");
    return 0;
}
/*

06-3455-7889

*/
