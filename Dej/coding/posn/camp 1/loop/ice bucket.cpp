/*
    TASK: Intro01
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<stdio.h>
int T[130];
int main()
{
int a,e,f,g=1,h,d=0,i=0;
scanf("%d",&a);
for(int b=0;b<a;b++){
        d =0;
i=0;
g =1;
    scanf("%d %d",&e,&f);
    while(d<=0){
    h = 100*g;
    if(e<=h){
        T[b]=i;
        d = 10;
    }else{
    i = i+1;
    g = g+f-1;
    e = e-10;
    }
    }
}
for(int z=0;z<a;z++){
    printf("%d\n",T[z]);
}
    return 0;
}
