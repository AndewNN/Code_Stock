/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int q,i,now;
	long long sum=0,l=0,ans;
	scanf("%d",&q);
	for(i=1;i<=q;i++)
    {
        scanf("%d",&now);
        ans=now*i-sum;
        printf("%d ",ans);
        sum+=ans;
    }
    return 0;
}
