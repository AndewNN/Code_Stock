/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int b,c,a[10],ans[100100][20],cou=0,an[100100],t[100100];
void p(int state,int sum){
    if(sum > b || state > c){
        return ;
    }
    if(sum == b){
        an[cou] = state;
        for(int i=0;i<state;i++){
            ans[cou][i] = t[i];
        }
        cou++;
    }
    int z;
    for(z=0;z<6;z++){
        t[state] = a[z];
        p(state+1,sum+a[z]);
    }
}
int main()
{
    int i,j;
    scanf("%d %d",&b,&c);
    for(i=0;i<6;i++){
        scanf("%d",&a[i]);
    }
    p(0,0);
    printf("%d\nE\n",cou);
    for(i=0;i<cou;i++){
        printf("%d",an[i]);
        for(j=0;j<an[i];j++){
            printf(" %d",ans[i][j]);
        }
        printf("\nE\n");
    }
    return 0;
}
