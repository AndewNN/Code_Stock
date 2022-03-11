#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,n;
    scanf("%d %d %d",&a,&b,&c);
    n=(a+b+c>80)? 80:(a+b+c>=50)? ((a+b+c)/5)*5:30;
    printf((n%10==5&&n>50)? "%c+":"%c",'E'-n/10+4);
}
