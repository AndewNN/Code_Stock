/*
    TASK: Intro01
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<bits/stdc++.h>int a[1010
using namespace std;
int a[2100];
int main()
{
int n,k,i,sum=0;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
sort(a,a+n);
for(i=n-1;i>=0;i-=k)
    sum += a[i];
printf("%d\n",sum);
    return 0;
}
