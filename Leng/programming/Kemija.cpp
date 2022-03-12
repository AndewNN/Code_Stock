#include<bits/stdc++.h>
using namespace std;
char a[200];
int main(){
    int i;
    gets(a);
    for(i=0;i<strlen(a);i++){
        printf("%c",a[i]);
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
            i+=2;
    }
    return 0;
}

