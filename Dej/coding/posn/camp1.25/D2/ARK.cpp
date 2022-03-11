/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[100100];
int main()
{
	int i,n,k;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
        scanf("%d",&a[i]);
	}
	sort(a,a+n);
	printf("%d\n",a[n-1]-a[k-1]);
    return 0;
}
