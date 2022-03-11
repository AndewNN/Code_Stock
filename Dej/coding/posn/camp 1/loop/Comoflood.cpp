/*
    TASK: Intro01
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<stdio.h>
int main()
{
int n,p,d,c=0;
bool open = true;
scanf("%d",&n);
for(int a=1;a<=n;a++){
    scanf("%d",&d);
    if(d>=80){
        c =c+1;
        open = false;
    }else if((d>=20 && d-p>=10)&&(a!=1) && open){
   c = c+1;
    }
    p = d;
    open = true;
}
printf("%d",c);
    return 0;
}
