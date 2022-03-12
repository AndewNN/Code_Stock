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
	int last,i,n,sum=0,now,len;
    scanf("%d %d",n,a[0]);
    len = 1;
    last = 0;
    for(i=1;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i-1]<=a[i]){
            sum+=(a[last]*len);
        }else{

        }
    }
    return 0;
}
