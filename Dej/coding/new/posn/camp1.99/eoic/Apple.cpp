/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int si(int a,int b){
    if(a%b==0)  return b;
    else return si(b,a%b);
}
int main()
{
    int n,m,i,t;
    scanf("%d %d",&n,&m);
    t = si(n,m);
    for(i=1;i<=t;i++){
        if(n%i==0 && m%i==0){
            printf("%d %d %d\n",i,n/i,m/i);
        }
    }
    return 0;
}
