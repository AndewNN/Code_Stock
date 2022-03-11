#include<bits/stdc++.h>
using namespace std;
int x[12],y[12],ans[12];
int main()
{
	int n,m,p,i,j,k,mn,temp;
	scanf("%d %d %d",&n,&m,&p);
	for(i=0;i<p;i++)
		scanf("%d %d",&x[i],&y[i]);
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			for(k=0,mn=20000,temp=0;k<p;k++){
				if(abs(i-x[k])+abs(j-y[k])<mn)
					mn=abs(i-x[k])+abs(j-y[k]),temp=k;
			}
			ans[temp]++;
		}
	}
	for(i=0;i<p;i++)
		printf("%d\n",ans[i]);
	return 0;
}
