/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[1010];
int main()
{
	int q,n,i,r,c,m;
	scanf("%d",&q);
	while(q--){
        scanf("%d %d",&n,&m);
        for(i=0;i<m;i++){
            scanf("%d %d",&r,&c);
            a[i] = r*c;
        }
        sort(a,a+m,greater<int>());
        for(i=0;i<m;i++){
            n -= a[i];
            if(n<=0){
                printf("%d\n",i+1);
                break;
            }
        }
	}
    return 0;
}
