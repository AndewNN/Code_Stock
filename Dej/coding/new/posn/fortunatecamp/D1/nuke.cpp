/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
double x[5100],y[5100],dx,dy;
int main()
{
	int i,a,n;
	scanf("%d %d",&a,&n);
	for(i=0;i<n;i++){
        scanf("%lf %lf",&x[i],&y[i]);
	}
	sort(x,x+n);
	sort(y,y+n);
    dx = max(x[0],a-x[n-1]);
    dy = max(y[0],a-y[n-1]);
for(i=0;i<n-1;i++){
    dx = max(dx,(x[i+1]-x[i])/2);
    dy = max(dy,(y[i+1]-y[i])/2);
}
printf("%.3lf\n",min(dx,dy));
    return 0;
}
