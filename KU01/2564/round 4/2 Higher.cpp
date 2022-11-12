/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int a[100][100],ma[25][25];
int main()
{
    int n,m,s,i,j,cou=0;
    scanf("%d %d %d",&n,&m,&s);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(j=1;j<=m;j++){
        for(i=1;i<=n;i++){
            ma[i][j]=max(a[i][j]+s*i,ma[i-1][j]);
            if(ma[i-1][j]<a[i][j]+s*i)
                cou++;
        }
    }
    printf("%d\n",cou);
    return 0;
}
/*

5 1 1
10
9
9
10
9


*/
