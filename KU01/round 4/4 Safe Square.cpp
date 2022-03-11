/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int a[110];
int main()
{
    int n,i,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    sort(a,a+n);
    printf("\n%d\n",sum);
    for(i=0;i<n;i++){
        if(i%10==0)
            printf("\n");
        printf("%d ",a[i]);
    }
    return 0;
}
/*
14 13 17 15 15 14 15 28 18
17 11 9 13 16 18 15 14 16
7 16 11 12 19 27 14 12 19
*/
