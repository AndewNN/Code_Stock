/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int in[1000100],out[1000100];
int main()
{
	int n,q,s,e,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
        scanf("%d %d",&s,&e);
        in[s]++,out[e]++;
	}
	for(i=1;i<=1000000;i++)
        in[i]+=in[i-1],out[i]+=out[i-1];
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&s,&e);
        printf("%d\n",in[e]-out[s-1]);
    }
    return 0;
}
