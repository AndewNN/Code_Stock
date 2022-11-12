/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int a[12][2010];
int main()
{
    int n,l,x,i,j;
    scanf("%d %d %d",&n,&l,&x);
    a[0][x]=1;
    for(i=0;i<n;i++){
        for(j=1;j<=2*l-1;j++){
            if(j!=1 && j!= 2*l-1)
                a[i+1][j-1]+=a[i][j],a[i+1][j+1]+=a[i][j];
            if(j==1)
                a[i+1][j+1]+=2*a[i][j];
            if(j==2*l-1)
                a[i+1][j-1]+=2*a[i][j];
        }
    }
    for(i=1+(n%2);i<=2*l-1;i+=2)
        printf("%d ",a[n][i]);
}
