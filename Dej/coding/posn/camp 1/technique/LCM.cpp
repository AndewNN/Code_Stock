/*
    TASK: Intro01
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<stdio.h>
long long A[50020];
int gcd(long long a,long long b){
if(a%b==0){
    return b;
}else{
return gcd(b,a%b);
}
}
int main()
{
long long c,d,e,f,g;
scanf("%lld %lld",&c,&e);
g =e;
for(long long d=1;d<c;d++){
    scanf("%lld",&f);
    e = e*f/gcd(e,f);
}
printf("%lld",e);
    return 0;
}
