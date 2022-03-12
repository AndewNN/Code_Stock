/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int x[1000100],y[1000100],ans[1001000];
int main()
{
    int n,i,j,xx,yy,cou=-1;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d",&xx,&yy);
        x[xx]++,y[yy]++;
    }
    ans[0]=x[0]-y[0];
    for(i=1;i<=1000000;i++)
        ans[i]+=ans[i-1]+x[i]-y[i];
    for(i=0;i<=1000000;i++)
        cou=max(cou,ans[i]);
    printf("%d",cou);
    return 0;
}
/*

5
1 4
3 9
2 8
6 10
5 10

*/
