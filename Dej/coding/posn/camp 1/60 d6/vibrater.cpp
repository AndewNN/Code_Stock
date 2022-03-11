/*
    TASK: Intro01
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[50010]={1};
int main()
{
int c,n,i,num;
scanf("%d %d",&c,&n);
while(n--){
    scanf("%d",&num);
    for(i=c;i>=num;i--){
        if(a[i-num]){
            a[i]=1;
        }
    }
}
    for(i=c;i>=1;i--){
            if(a[i]==1){
                printf("%d\n",i);
                return 0;
            }
    }
    return 0;
}
