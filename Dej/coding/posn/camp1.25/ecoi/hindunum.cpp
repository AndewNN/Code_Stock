/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[1000100];
int main()
{
	int j,i,n,state=-1,sum=0;
	scanf("%d",&n);
	for(i=1;i<n;i++){
        scanf("%d",&a[i]);
	}
	for(i=state+1;i<n;i++){
        for(j=i+1;j<n;j++)
            sum+=(a[i]^a[j]);
	}
	printf("%d\n",sum);
    return 0;
}
