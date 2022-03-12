/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int p(int a,int b){
    if(a < b) swap(a,b);
    if(a%b==0) return b;
    else       return p(b,a%b);
}
int main()
{
    int a,b,c,gcd;
    scanf("%d %d %d",&a,&b,&c);
    gcd = p(a,b);
    if(c%gcd==0){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}
