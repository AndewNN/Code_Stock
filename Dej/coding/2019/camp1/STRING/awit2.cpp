/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<stdio.h>
#include<string.h>
char a[1000],b[100];
char *as;
int main()
{
    int i,len,j,q,ch,c;
    gets(b);
    sscanf(b,"%d",&q);
    while(q--){
        ch = 0;
        gets(a);
        len = strlen(a);
        if(a[len-1]=='\r')
            a[len-1]='\0';
        as = strtok(a," ");
        while(as!=NULL){
            len = strlen(as);
            if(len%4==0){
                c = 1;
                for(i=0;i<len;i+=4){
                    if(strncmp(as+i,"meow",4)){
                        c = 0;
                    }
                }
                if(c){
                    ch = 1;
                }
            }
            as = strtok(NULL," ");
        }
        if(ch){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}
