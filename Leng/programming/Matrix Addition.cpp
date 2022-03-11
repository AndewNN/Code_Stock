#include<bits/stdc++.h>
using namespace std;
int a[110][110];
int main(){
    int n,m,i,j,x;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++){
            scanf("%d",&x);
            a[i][j]+=x;
        }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
}
/*

3 3
1 2 3
3 2 1
1 3 2
1 1 1
1 1 1
1 1 1

*/
