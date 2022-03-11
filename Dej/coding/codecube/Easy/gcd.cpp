/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(a%b==0) return b;
    else return gcd(b,a%b);
}
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    if(b>a){
        c = a;
        a = b;
        b = c;
    }
    if(a!=0 && b!= 0){
        printf("%d",gcd(a,b));
    }else{
        printf("%d",a);
    }
    return 0;
}
