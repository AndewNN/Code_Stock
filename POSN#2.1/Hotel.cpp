/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int a[1000100],s[4]={1,2,5,15},p[5]={500,800,1500,3000};
int main()
{
    int i,j,n,k;
    scanf("%d",&n);
    for(i=1;i<1000000;i++)
        a[i]=1e9;
    for(i=1;i<=n;i++)
        for(j=0;j<4;j++){
            if(i-s[j]>=0)
                a[i]=min(a[i],a[i-s[j]]+p[j]);
            else
                a[i]=min(a[i],p[j]);
        }
    printf("%d\n",a[n]);
    return 0;
}
