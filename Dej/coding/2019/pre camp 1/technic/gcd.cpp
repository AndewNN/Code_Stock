/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a,gcd,n;
int p(int x,int y){
    if(y > x) swap(x,y);
    if(x%y==0) return y;
    else       return p(y,x%y);
}
int main()
{
    scanf("%d %d",&n,&gcd);
    n--;
    while(n--){
        scanf("%d",&a);
        gcd = p(a,gcd);
    }
    printf("%d\n",gcd);
    return 0;
}
