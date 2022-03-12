/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int a[10];
int main(){
    int n,m,i;
    scanf("%d",&m);
    for(i=1;i<=m;i++){
        n=i;
        if(n>=100)      a[4]+=n/100,n-=n/100*100;
        if(n>=90)       a[4]++,a[2]++,n-=90;
        if(n>=50)       a[3]++,n-=50;
        if(n>=40)       a[3]++,a[2]++,n-=40;
        if(n>=10)       a[2]+=n/10,n-=n/10*10;
        if(n>=9)        a[2]++,a[0]++,n-=9;
        if(n>=5)        a[1]++,n-=5;
        if(n>=4)        a[1]++,a[0]++,n-=4;
        if(n>=1)        a[0]+=n;
    }
    for(i=0;i<5;i++)
        printf("%d ",a[i]);
}