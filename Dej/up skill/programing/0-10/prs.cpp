#include<bits/stdc++.h>
using namespace std;
char a[10001000];
int main()
{
    int len,i,n,cou=1,ans=0,x;
    scanf("%d %s",&len,a);
    for(i=len-1; i>=0; i--)
    {
        if(a[i]=='P')
        {
            x = 0;
        }
        else if(a[i]=='R')
        {
            x = 1;
        }
        else
        {
            x = 2;
        }
        ans += (x*cou);
        cou*=3;
    }
    ans++;

    if(len>=3)
    {
        if(a[0]=='P')
        {
            x = 1;
        }
        else if(a[0]=='R')
        {
            x = 2;
        }
        else
        {
            x = 3;
        }
        ans -= len-2;
    }
    printf("%d",ans);
    return 0;
}
