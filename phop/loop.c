#include<stdio.h>
#include<string.h>
int main(){
    int i;
    char a[10] = "Hello";
    for(i=0;i<5;i++)
        printf("%d\n",i);

    for(i=0;i<strlen(a);i++)
        printf("%d: %c\n",i,a[i]+1);

}
