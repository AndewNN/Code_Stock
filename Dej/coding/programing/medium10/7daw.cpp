/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[10],ch[10];
void p(int state,int sum,int last){
    int i,k;
    if(state == 7 && sum == 100){
        for(i=0;i<=9;i++){
            if(ch[i]){
                printf("%d\n",a[i]);
            }
        }
        exit(0);
    }
    if(sum > 100){
        return;
    }
    for(i=last+1;i<9;i++){
        if(!ch[i]){
            ch[i]=1;
            p(state+1,sum+a[i],i);
            ch[i]=0;
        }
    }
}
int main()
{
    int i;
    for(i=0;i<9;i++){
        scanf("%d",&a[i]);
    }
    p(0,0,-1);
    return 0;
}
