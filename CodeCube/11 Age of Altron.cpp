/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int a[1010][1010];
int main()
{
    int n,m,i,j,k,cnt,ch;
    scanf("%d %d %d",&n,&m,&k);
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            scanf("%d",&a[i][j]);
    for(j=1;j<=m;j++){
        ch=0;
        for(i=n;i>=1;i--){
            if(a[i][j]==0)
                ch=1;
            if(ch)
                a[i][j]=0;
        }
    }
    for(i=n;i>=1;i--)
        for(j=1,cnt=0;j<=m;j++){
            if(a[i][j]==0)
                cnt++;
            if(a[i][j]==1)
                cnt=0;
            if(cnt>=k){
                printf("%d"i);
                return 0;
            }
        }
    return 0;
}
/*

5 5 4
1 0 1 1 1
1 0 1 0 0
1 1 0 1 1
1 0 1 1 1
1 1 1 0 1

*/
