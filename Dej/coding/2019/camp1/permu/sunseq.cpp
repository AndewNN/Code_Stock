/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<stdio.h>
int n,k,a[100],cnt=0,ch;
void p(int state,int sum){
    int i,j;
    if(sum > n || ch == 0){
        return ;
    }
    if(sum == n){
        cnt++;
        if(cnt == k && ch){
            for(i=0;i<state;i++){
                printf("%d",a[i]);
            }
            printf("\n");
            ch = 0;
        }
    }
    for(i=1;i<=9;i++){
        a[state] = i;
        p(state+1,sum+i);
    }
}
int main()
{
    int q,i;
    scanf("%d",&q);
    while(q--){
        ch = 1;
        cnt = 0;
        scanf("%d %d",&n,&k);
        p(0,0);
    }
    return 0;
}
