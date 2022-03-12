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
    int n,i,j,x,y,cnt=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d",&x,&y);
        a[x][y]=1;
    }
    for(i=0;i<=1000;i++)
        for(j=0;j<=1000;j++)
            if(a[i][j])
                cnt++;
    printf("%d",cnt);
    return 0;
}
