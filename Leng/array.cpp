#include<bits/stdc++.h>
using namespace std;
char a[1010],c;
int main(){
    int n,i,len,o;
    scanf("%d %s",&o,a);
    for(i=0;i<strlen(a);i++){
        if(o==1){
            if(a[i]>='a'&&a[i]<='z')
                a[i]+='A'-'a';
                printf("%c",a[i]);
        }
        if(o==2){
            if(a[i]<'a'||a[i]>'z')
                a[i]+='a'-'A';
                printf("%c",a[i]);
        }
        else{
            if(a[i]>='a'&&a[i]<='z')
                a[i]+='A'-'a';
            else
                a[i]+='a'-'A';
            printf("%c",a[i]);
        }
    }

}
