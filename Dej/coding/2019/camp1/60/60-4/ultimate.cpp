#include<bits/stdc++.h>
using namespace std;
int a[1100][1100];
char b;
int main()
{
    int r,c,i,j,mx=-100;
    scanf("%d %d",&r,&c);
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            scanf(" %c",&b);
            if(b == '#'){
                a[i][j]=0;
            }else{
                a[i][j] = min(a[i-1][j],min(a[i][j-1],a[i-1][j-1]))+1;
            }
            mx = max(a[i][j],mx);
        }
    }
    printf("%d\n",mx);
    return 0;
}
