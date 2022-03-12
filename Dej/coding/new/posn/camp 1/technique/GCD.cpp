/*
    TASK: Intro01
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<stdio.h>
int A[50020];
int gcd(int a,int b){
if(a%b==0){
    return b;
}else{
return gcd(b,a%b);
}
}
int main()
{
int c,d,e,f;
scanf("%d %d",&c,&e);
for(int d=1;d<c;d++){
    scanf("%d",&f);
    e = gcd(e,f);
}
printf("%d",e);
    return 0;
}
