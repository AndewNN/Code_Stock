/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int p[100100];
int fin(int i){
if(p[i]==i) return i;
else return p[i] = fin(p[i]);
}
int main()
{
	int i,n,m,x,y,r;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++){
        p[i] = i;
	}
	while(m--){
        scanf("%d %d",&x,&y);
        p[fin(x)] = fin(y);
	}
	scanf("%d",&r);
	while(r--){
        scanf("%d %d",&x,&y);
        if(fin(x)==fin(y)){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
	}
    return 0;
}
