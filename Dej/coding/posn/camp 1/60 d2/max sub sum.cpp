/*
    TASK: Intro01
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<bits/stdc++.h>int a[1010
using namespace std;
int main()
{
int i,n,sum=0,ansst=1,ansen,st=1,en,num,Max=-1000000000,ch=1,ans2=-1000000000,st2;
scanf("%d",&n);
for(i=1;i<=n;i++){
    scanf("%d",&num);
    if(num>=0) ch=0;
    if(num>ans2) ans2=num,st2=i;
    sum += num;
    if(sum>=0){
        if(sum>Max)
            Max=sum,ansst=st,ansen=i;
        }else{
        sum =0,st=i+1;
        }
}
    if(ch){
        printf("%d %d\n%d\n",st2,st2,ans2);
    }else{
        printf("%d %d\n%d\n",ansst,ansen,Max);
    }
    return 0;
}
