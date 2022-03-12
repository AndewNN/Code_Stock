/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int a[100100];
int main()
{
    int n,now,cou=0,i,j,k,m,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        cou+=a[i];
    }
    sort(a,a+n);
    m=n/3;
    for(i=0;i<m;i++)
        sum+=a[i*2];
    printf("%d\n",cou-sum);


    return 0;
}
