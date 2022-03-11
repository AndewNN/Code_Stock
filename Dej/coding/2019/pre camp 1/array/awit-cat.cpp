/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
char a[1000];
char *ptr;
int main()
{
    int q,len,ch,ch2,i;
    gets(a);
    sscanf(a,"%d",&q);
    while(q--){
        gets(a);
        if(a[strlen(a)-1]=='\r');
            a[strlen(a)-1]='\0';
        ptr = strtok(a," ");
        ch = 1;
        while(ptr != NULL){
            len = strlen(ptr);
            if(len%4==0){
                for(i=0,ch2=1;i<len;i+=4){
                    if(strncmp(&ptr[i],"meow",4)){
                        ch2=0; break;
                    }
                }
                if(ch2){
                    printf("YES\n"); ch=0; break;
                }
            }
            ptr = strtok(NULL," ");
        }
        if(ch)
            printf("NO\n");
    }
    return 0;
}
