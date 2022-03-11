/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<stdio.h>
#include<string.h>
#include<math.h>
char a[10],ans[10];
int main()
{
    int q,i,j,len,x=0,b=0;
    for(q=0;q<5;q++){
        x = 0,b=0;
        scanf(" %s",a);
        len = strlen(a);
        for(i=0;i<len;i++){
            x += pow(a[i]-'0',i+1);
            b *= 10;
            b+= a[i]-'0';
        }
        if(x == b){
            ans[q] = 'Y';
        }else{
            ans[q] = 'N';
        }
    }
    for(q = 0 ;q<5;q++){
        printf("%c",ans[q]);
    }
    return 0;
}
