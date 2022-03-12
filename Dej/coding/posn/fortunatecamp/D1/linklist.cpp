/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int l[500100],r[500100];
int main()
{
	int n,q,i,x,y,run;
	char a;
	scanf("%d %d",&n,&q);
	for(i=0;i<=n;i++){
        l[i] = i-1;
        r[i] = i+1;
	}
    while(q--){
        scanf(" %c %d %d",&a,&x,&y);
        if(a=='A'){
           r[l[x]] = r[x];
           l[r[x]] = l[x];
           r[l[y]] = x;
           l[x] = l[y];
           r[x] = y;
           l[y] = x;
        }else{
            r[l[x]]=r[x],l[r[x]]=l[x];
            l[r[y]] =x,r[x]=r[y],r[y]=x,l[x]=y;
        }
    }
    run = r[0];
    for(i=0;i<n;i++){
        printf("%d ",run);
        run = r[run];
    }
    return 0;
}
