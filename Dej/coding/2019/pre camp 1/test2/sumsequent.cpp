/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
long long s,n,a[30],cou=0,ch;
void p(long long sum,long long state){
    long long i,k;
    if(sum == s){
        cou++;
        if(cou == n){
            for(i=0;i<state;i++){
                printf("%lld",a[i]);
            }
            printf("\n");
            ch = 0;
        }
        return ;
    }
    if(sum > s){
        return ;
    }
    for(k=1;k<=9 && ch;k++){
        a[state] = k;
        p(sum+k,state+1);
    }
}
int main()
{
    long long q;
    scanf("%lld",&q);
    while(q--){
        ch = 1;
        cou = 0;
        scanf("%lld %lld",&s,&n);
        p(0,0);
    }
    return 0;
}
