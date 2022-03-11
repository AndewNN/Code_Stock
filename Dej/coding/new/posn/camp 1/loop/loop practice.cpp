/*
    TASK: Intro01
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<stdio.h>
int main()
{
int a,c,d=1,e,f;
scanf("%d",&a);
c = a; f = a;
for(int b = 1;b<=a;b++){
    printf("%d ",b);
}
    printf("\n");
while(c>0){
    printf("%d ",c);
    c--;
}
    printf("\n");
do{
    if(d%2 == 0){
    printf("%d ",d);
    }
        d++;
}while(d<=a);
    printf("\n");
for(int e = a;e>=1;e--){
    if(e%2==0){
    printf("%d ",e);
    }
}
    printf("\n");
c =1;
while(c<=a){
        if(c%2==1){
    printf("%d ",c);
        }
    c++;
}
    printf("\n");
do{
    if(f%2 == 1){
    printf("%d ",f);
    }
    f--;
}while(f>=1);
    printf("\n");

    return 0;
}
