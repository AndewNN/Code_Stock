/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<stdio.h>
#include<string.h>
char a[110];
int main()
{
    int len,i,cou=1;
    scanf(" %s",a);
    len = strlen(a);
    for(i=0;i<len;i++){
        if(a[i]=='N'){
            if(cou!=1){
                while(cou%4!=1){
                    printf("R");
                    cou++;
                    cou%=4;
                }
            }
            printf("F");
        }else if(a[i]=='E'){
            if(cou!=2){
                while(cou%4!=2){
                    printf("R");
                    cou++;
                    cou%=4;
                }
            }
            printf("F");
        }else if(a[i]=='S'){
            if(cou!=3){
                while(cou%4!=3){
                    printf("R");
                    cou++;
                    cou%=4;
                }
            }
            printf("F");
        }else if(a[i]=='W'){
            if(cou%4!=0){
                while(cou%4!=0){
                    printf("R");
                    cou++;
                    cou%=4;
                }
            }
            printf("F");
        }else{
            printf("Z");
            cou = 1;
        }
    }
    return 0;
}
