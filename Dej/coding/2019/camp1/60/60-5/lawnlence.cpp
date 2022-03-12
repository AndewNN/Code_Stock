#include<bits/stdc++.h>
using namespace std;
int n,pi[50],m,cnt=0;
char opr,a[100],ans[100100][100];
void p(int state){
    int i;
    if(state == n){
        for(i=0;i<state;i++){
            ans[cnt][i]=a[i];
        }
        cnt++;
        return ;
    }
    for(i=0;i<=26;i++){
        if(pi[i]){
            a[state] = 'A'+i;
            pi[i]-=1;
            p(state+1);
            pi[i]+=1;
        }
    }
}
int main()
{
    int i,b,j;
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++){
        scanf(" %c %d",&opr,&b);
        pi[opr-'A']=b;
    }
    p(0);
    printf("%d\n",cnt);
    for(i=0;i<cnt;i++){
        for(j=0;j<n;j++){
            printf("%c",ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}
