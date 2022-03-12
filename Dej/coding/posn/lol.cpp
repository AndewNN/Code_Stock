#include<stdio.h>
#include<string.h>
int main()
{
int a,b,c;
scanf("%d %d",&a,&b);
c = a;
    for(int e=1;e<=42;e++){
        if(a == 7 && e<=b){
            printf("%d ",e);
        }
        if(a!=0 && a!= 7){
            printf("  ");
            a = a-1;
        }else if(e-c<=31 && a!= 7){
        printf("%d ",e-c);
        }
        if(e%7==0){
            printf("\n");
        }
    }
    return 0;
}
