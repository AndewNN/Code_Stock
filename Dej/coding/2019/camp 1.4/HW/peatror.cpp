#include<bits/stdc++.h>
using namespace std;
char a[1000100],c[10]={'p','e','a','t','r','o','r'};
long long b[1000100];
int main()
{
    long long len,i,j,d;
    scanf(" %s",a);
    len = strlen(a);
    for(j=0,d=1;j<len;j++){
        if(a[j]=='p'){
            b[j] = d;
        }
    }
    for(i=1;i<7;i++){
        for(j=0,d=0;j<len;j++){
            d += b[j];
            d%=2555;
            b[j] = 0;
            if(a[j]==c[i]){
                b[j] = d;
                b[j]%=2555;
            }
        }
    }
    for(i=0,d=0;i<len;i++){
        d+=b[i];
        d%=2555;
    }
    printf("%lld\n",d%2555);
    return 0;
}
