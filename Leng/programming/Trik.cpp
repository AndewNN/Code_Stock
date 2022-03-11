#include<bits/stdc++.h>
using namespace std;
char a[60];
int aa[4];
int main(){
    int i,t;
    scanf(" %s",a);
    for(i=0,aa[1]=1;i<strlen(a);i++){
        if(a[i]=='A')
            swap(aa[1],aa[2]);
        if(a[i]=='B')
            swap(aa[3],aa[2]);
        if(a[i]=='C')
            swap(aa[1],aa[3]);
    }
    for(i=1;i<=3;i++)
        if(aa[i])
            printf("%d",i);
}
