/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<stdio.h>
#include<string.h>
using namespace std;
char a[1000],b[1000],c[1000];
int st[1000];
int main()
{
    int q,si,sj,len,i,cou=0,j,k,ch,ch1,ch3,de;
    gets(b);
    sscanf(b,"%d",&q);
    while(q--){
        ch3 = 1;
        ch = 1;
        si = 0;
        cou=0;
        gets(a);
        len = strlen(a);
        if(len == 0){
            ch3=0;
        }
        si=0;
        for(i=0;i<len;i++){
            if(a[i]==' '){
                st[cou]=i;
                cou++;
            }
        }
        st[cou]=len;
        cou++;
        for(i=0;i<cou;i++){
            if(a[si] == ' '){
                si = st[i]+1;
                continue;
            }
            if((st[i]-si)%4==0 && (st[i]-si)!=0){
                ch1 = 1;
                k = 0;
                for(j=si;j<st[i];j++){
                    c[k] = a[j];
                    k++;
                }
                for(de=0;de<k;de+=4){
                if(strncmp(c+de,"meow",4)&& ch){
                    ch1 = 0;
                }
                }
                if(ch1){
                    ch=0;
                }
            }
            si = st[i]+1;
        }
        if(!ch && ch3){
            printf("YES\n");
        }else if(ch || !ch3){
            printf("NO\n");
        }
    }
    return 0;
}
