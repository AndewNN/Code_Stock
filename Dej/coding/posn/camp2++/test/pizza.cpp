/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[20];
int main()
{
    int i,maxx=0;
    for(i=1;i<=8;i++){
        scanf("%d",&a[i]);
        a[i+8]=a[i];
        a[i]+=a[i-1];
    }
    a[9]+=a[8];
    a[10]+=a[9];
    a[11]+=a[10];
    for(i=4;i<=11;i++){
        maxx = max(maxx,(a[i]-a[i-4]));
    }
    printf("%d\n",maxx);
    return 0;
}
