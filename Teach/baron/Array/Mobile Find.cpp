#include<bits/stdc++.h>
using namespace std;
int a[1010][1010];
int main(){
    int n,m,i,j,x,y,q,ma=-1,sum;
    scanf("%d",&q);
    while(q--){
        ma=-1;
        scanf("%d %d",&n,&m);
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                scanf("%d",&a[i][j]);
        for(i=0;i<n;i++)
            for(j=0;j<m-1;j++){
                sum = a[i][j]+a[i][j+1];
                if(sum>ma && abs(a[i][j]-a[i][j+1])<=10){
                    ma=sum,x=i,y=j;
                }
            }
        for(i=0;i<n-1;i++)
            for(j=0;j<m;j++){
                sum = a[i][j]+a[i+1][j];
                if(sum>ma && abs(a[i][j]-a[i+1][j])<=10){
                    ma=sum,x=i,y=j;
                }
            }
        printf("%d %d\n",x+1,y+1);
    }
    return 0;
}
/*

2
4 5
5 1 2 10 4
4 30 3 0 100
3 25 10 4 10
3 20 4 8 5
4 4
0 0 0 0
0 0 0 0
0 1 1 1
1 1 0 0

*/
