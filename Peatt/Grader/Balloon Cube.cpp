/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
	int t,idx,w;
	bool operator < (const A&o) const{
		return t>o.t;
	}
};
priority_queue<A > heap;
int sum[100010];
int p[100010];
int fr(int u){
	if(p[u] == u)	return u;
	else			return fr(p[u]);
}
void upd(int now,int target){
	sum[now]-=sum[target];
	if(p[now] == now)	return ;
	else				upd(p[now],target);
}
int main(){
	int n,m,u,v,w,t,rv,opr;
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&w);
		sum[i] = w,p[i] = i;
	}
	for(int i=1;i<=m;i++){
        scanf("%d",&opr);
		while(!heap.empty() && i == heap.top().t){
			auto now = heap.top();
			heap.pop();
			rv = fr(now.idx);
			sum[rv]+=now.w;
		}
		if(opr == 1){
			scanf("%d",&u);
			if(p[u] == u)	continue;
			upd(p[u],u);
			p[u] = u;
		}else if(opr == 2){
		    scanf("%d %d %d %d",&u,&v,&t,&w);
			rv = fr(v);
			if(rv == u)		continue;
			if(p[u] != u)	upd(p[u],u);
			p[u] = rv;
			sum[rv]+=sum[u];
			heap.push({t,u,w});
		}else if(opr == 3){
			scanf("%d",&v);
			rv = fr(v);
			printf("%d",sum[rv]);
		}
	}
	return 0;
}
/*

7 10
1 2 3 4 5 6 7
3 1
2 1 2 5 3
3 1
3 2
3 2
1 1
3 2
2 2 3 9 4
3 2
3 3

7 17
1 2 3 4 5 6 7
2 1 2 5 1
2 2 5 5 2
2 3 5 5 3
2 4 5 8 4
3 1
2 6 7 8 5
2 5 7 8 6
3 1
3 6
2 7 1 11 7
3 7
2 2 5 13 8
3 1
3 4
2 4 6 17 10
1 4
3 4

*/
