/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,cnt=0,sum=0,val=1,now;
	scanf("%d",&n);
	while(n){
        now = n%3;
        n /= 3;
        if(now==1){
            cnt++,sum+=val;
        }else if(now==2){
            cnt++,n++;
        }
        val *= 3;
	}
	printf("%d %d\n",cnt,sum);
    return 0;
}
