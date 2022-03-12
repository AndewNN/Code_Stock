/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include <bits/stdc++.h>
using namespace std;
char a[10001000];
int pi[5001000];
int main(){
    int i,j=0,n,nn;
    scanf("%d %s",&n,a+1);
    for(i=1;i<=n;i++){
        a[n+i] = a[i];
    }
    nn = n+n;
    for(i=2;i<=nn;i++){
        while(j > 0 && a[j+1] != a[i]) j = pi[j];
        if(a[j+1] == a[i]) j++;
        pi[i] = j;
        if(j == n){
            printf("%d\n",i-n);
            return 0;
        }
    }
    return 0;
}
