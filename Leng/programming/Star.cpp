#include<bits/stdc++.h>
using namespace std;
char a[1010][1010];
int main(){
    int i,j,n,c;
    memset(a,'-',sizeof a);
    scanf("%d",&n);
    c=(n+1)/2;
    for(i=1;i<=(n+1)/2;i++){
        a[i][c+i-1]=a[i][c-i+1]='*';
        a[n-i+1][c+i-1]=a[n-i+1][c-i+1]='*';
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n-(n+1)%2;j++)
            printf("%c",a[i][j]);
        printf("\n");
    }

}

