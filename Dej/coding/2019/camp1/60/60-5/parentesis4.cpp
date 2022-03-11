#include<bits/stdc++.h>
using namespace std;
int n,cou = 0;
char a[30],ans[60000][30];
void p(int state,int w,int l){
    int i;
    if(w> n || l > n){
        return ;
    }
    if(state == 2*n){
        for(i=0;i<state;i++){
            ans[cou][i] = a[i];
        }
        cou++;
    }
    if(w<l+1){
        a[state]='(';
        p(state+1,w+1,l);
    }else{
        a[state]='(';
        p(state+1,w+1,l);
        a[state]=')';
        p(state+1,w,l+1);
    }
}
int main()
{
    int i,j;
    scanf("%d",&n);
    p(0,0,0);
    printf("%d\n",cou);
    for(i=0;i<cou;i++){
        for(j=0;j<n*2;j++){
            printf("%c",ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}
