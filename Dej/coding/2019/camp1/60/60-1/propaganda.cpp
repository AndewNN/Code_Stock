/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,m,cou=0;
    scanf("%d",&n);
    m = sqrt(n);
    for(i=1;i<=m;i++){
        if(n%i==0){
            cou++;
        }
    }
    if(cou == 1 && n!= 1){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}
