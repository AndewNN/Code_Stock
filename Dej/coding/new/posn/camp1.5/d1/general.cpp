/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int p[100100],q[100100];
int findroot(int i){
if(q[i]==i) return i;
else return q[i] = findroot(q[i]);
}
int main()
{
	int i,n,m,num,x,y;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++){
        scanf("%d",&num);
        p[i] = num;
        q[i] = i;
	}
	while(m--){
        scanf("%d %d",&x,&y);
        if(findroot(x)==findroot(y)){
            printf("-1\n");
        }else if(p[findroot(x)]<p[findroot(y)]){
            printf("%d\n",findroot(y));
        p[findroot(y)] += p[findroot(x)]/2;
            q[findroot(x)] = findroot(y);
        }else if(p[findroot(x)]>p[findroot(y)]){
            printf("%d\n",findroot(x));
            p[findroot(x)] += p[findroot(y)]/2;
            q[findroot(y)] = findroot(x);
        }else{
            if(findroot(x)>findroot(y)){
                printf("%d\n",findroot(y));
                p[findroot(y)] += p[findroot(x)]/2;
                q[findroot(x)] = findroot(y);
            }else{
                printf("%d\n",findroot(x));
                p[findroot(x)] += p[findroot(y)]/2;
            q[findroot(y)] = findroot(x);
                 }
        }
        }
    return 0;
}
