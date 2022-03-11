/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int n,a[20];
void p(int sum,int state){
    int i;
    if(sum==n){
        for(i=0;i<state;i++){
            if(a[i]==1){
                printf("--\n");
            }else if(a[i]==2){
                printf("||\n");
            }
        }
        printf("E\n");
        return ;
    }
    if(sum > n){
        return ;
    }
    a[state]=1;
    p(sum+1,state+1);
    a[state]=2;
    p(sum+2,state+1);
}
int main()
{
    scanf("%d",&n);
    p(0,0);
    return 0;
}
