/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int a[10],b[10];
int main(){
    int n,m,i;
    scanf("%d",&n);
    if(n>=100)      for(i=0;i<n/100;i++,printf("C"));n-=n/100*100;
    if(n>=90)       printf("XC"),n-=90;
    if(n>=50)       printf("L"),n-=50;
    if(n>=40)       printf("XL"),n-=40;
    if(n>=10)       for(i=0;i<n/10;i++,printf("X"));n-=n/10*10;
    if(n>=9)        printf("IX"),n-=9;
    if(n>=5)        printf("V"),n-=5;
    if(n>=4)        printf("IV"),a[0]++,n-=4;
    if(n>=1)        for(i=0;i<n;i++,printf("I"));
    

}