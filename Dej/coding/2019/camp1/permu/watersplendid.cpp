/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<stdio.h>
int n,k,a[20],an[100100],ans[100100][100],cou=0,b[100];
void p(int state,int sum){
    int i,j;
    if(state > k || sum > n){
        return ;
    }
    if(sum == n){
        for(i=0;i<state;i++){
            ans[cou][i] = b[i];
        }
        an[cou] = state;
        cou++;
        return ;
    }
    for(i=0;i<6;i++){
        b[state] =a[i];
        p(state+1,sum+a[i]);
    }
}
int main()
{
    int q,i;
    scanf("%d %d",&n,&k);
    for(i=0;i<6;i++){
        scanf("%d",&a[i]);
    }
    p(0,0);
    printf("%d\nE\n",cou);
    for(q = 0;q<cou;q++){
        printf("%d ",an[q]);
        for(i=0;i<an[q];i++){
            printf("%d ",ans[q][i]);
        }
        printf("\nE\n");
    }
    return 0;
}
