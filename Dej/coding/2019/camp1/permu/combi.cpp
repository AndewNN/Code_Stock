/*
    TASK:i
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<stdio.h>
#include<stdlib.h>
int r,n,k,a[100],mk[100],cnt=0;
void p(int state,int last){
    int i;
    if(state == n){
        cnt++;
        if(cnt == k){
            for(i = 0;i<state ; i++){
                printf("%d ",a[i]);
            }
            exit(0);
        }
    }
    for(i=last+1;i<=r;i++){
        if(!mk[i]){
            mk[i]=1;
            a[state] = i;
            p(state+1,i);
            mk[i]=0;
        }
    }
}
int main()
{
    scanf("%d %d %d",&r,&n,&k);
    p(0,0);
    return 0;
}

